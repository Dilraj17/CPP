#include <iostream>
class petrol{
    protected:
    float petrol_price = 89.78;
};
class cal:public petrol{
    public:
    void calculate(){
        float litres;
        std::cout << "Enter the number of litres: ";
        std::cin >> litres;
        std::cout << "Total cost: " << litres * petrol_price << std::endl;
    }
};
int main(){
    while(true){
    cal obj;
    obj.calculate();
    return 0;}
}