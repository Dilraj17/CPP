#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base Expense class
class Expense {
protected:
    string category;
    double amount;
    string date;
public:
    Expense(string cat, double amt) : category(cat), amount(amt) {
        // Simple date handling (no time.h)
        date = "Today";
    }
    
    virtual void display() {
        cout << "Category: " << category << "\n";
        cout << "Amount: $" << amount << "\n";
        cout << "Date: " << date << "\n";
    }
    
    virtual string toFileString() {
        return category + "," + to_string(amount) + "," + date;
    }
    
    virtual ~Expense() {} // Virtual destructor
};

// Derived class for recurring expenses
class RecurringExpense : public Expense {
    int frequency; // days between occurrences
public:
    RecurringExpense(string cat, double amt, int freq) 
        : Expense(cat, amt), frequency(freq) {}
        
    void display() override {
        Expense::display();
        cout << "Recurs every: " << frequency << " days\n";
    }
    
    string toFileString() override {
        return Expense::toFileString() + "," + to_string(frequency) + ",recurring";
    }
};

// Expense tracker class
class ExpenseTracker {
    Expense* expenses[100]; // Array of pointers
    int expenseCount;
    string filename;
    
public:
    ExpenseTracker(string file) : filename(file), expenseCount(0) {
        loadFromFile();
    }
    
    ~ExpenseTracker() {
        saveToFile();
        for (int i = 0; i < expenseCount; i++) {
            delete expenses[i];
        }
    }
    
    void addExpense(Expense* exp) {
        if (expenseCount < 100) {
            expenses[expenseCount++] = exp;
        } else {
            cout << "Max expenses reached!\n";
        }
    }
    
    void displayAll() {
        cout << "\n--- ALL EXPENSES ---\n";
        for (int i = 0; i < expenseCount; i++) {
            expenses[i]->display();
            cout << "-------------------\n";
        }
    }
    
    void saveToFile() {
        ofstream outFile(filename);
        if (!outFile) {
            cerr << "Error saving file!\n";
            return;
        }
        
        for (int i = 0; i < expenseCount; i++) {
            outFile << expenses[i]->toFileString() << "\n";
        }
    }
    
    void loadFromFile() {
        ifstream inFile(filename);
        if (!inFile) {
            cout << "No existing data file. Starting fresh.\n";
            return;
        }
        
        string line;
        while (getline(inFile, line)) {
            size_t pos = 0;
            string parts[5];
            int i = 0;
            
            while ((pos = line.find(',')) != string::npos) {
                parts[i++] = line.substr(0, pos);
                line.erase(0, pos + 1);
            }
            parts[i] = line;
            
            if (i >= 2) { // At least category,amount,date
                if (parts[4] == "recurring" && i >= 3) {
                    addExpense(new RecurringExpense(parts[0], stod(parts[1]), stoi(parts[3])));
                } else {
                    addExpense(new Expense(parts[0], stod(parts[1])));
                }
            }
        }
    }
};

// Main menu
int main() {
    ExpenseTracker tracker("expenses.txt");
    int choice;
    
    do {
        cout << "\n--- EXPENSE TRACKER ---\n";
        cout << "1. Add Regular Expense\n";
        cout << "2. Add Recurring Expense\n";
        cout << "3. View All Expenses\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer
        
        if (choice == 1) {
            string category;
            double amount;
            
            cout << "Enter category: ";
            getline(cin, category);
            cout << "Enter amount: $";
            cin >> amount;
            
            tracker.addExpense(new Expense(category, amount));
        }
        else if (choice == 2) {
            string category;
            double amount;
            int frequency;
            
            cout << "Enter category: ";
            getline(cin, category);
            cout << "Enter amount: $";
            cin >> amount;
            cout << "Enter frequency (days): ";
            cin >> frequency;
            
            tracker.addExpense(new RecurringExpense(category, amount, frequency));
        }
        else if (choice == 3) {
            tracker.displayAll();
        }
        else if (choice != 4) {
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    
    cout << "Goodbye!\n";
    return 0;
}