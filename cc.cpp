#include <iostream>
class convertor{
    protected:
    float usd=85.44;
};
class cal:public convertor{
    public:
    void calculate(){
        int inr;
        std::cout << "Enter the amount in INR: ";
        std::cin >> inr;
        inr=usd*inr;
        std::cout << "Total cost in INR: " <<inr<< std::endl;
    }
};
int main(){
    
    cal obj;
    obj.calculate();
    return 0;
}