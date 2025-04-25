#include <iostream>
#include <typeinfo>
int main() {
    int i = 10;
    double d = i; 
    std::cout<<typeid(d).name() ;
    std::cout<<d;
    return 0;
}