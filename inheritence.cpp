#include <iostream>
class base {
    public:
    int a = 10;

    private:
    int b = 20;

    protected:
    int c = 30;
};

class derived_public : public base {
    public:
    void out() {
        std::cout << a << std::endl;
        std::cout << c << std::endl;
    }
};

class derived_protected : protected base {
    public:
    void out1() {
        std::cout << a << std::endl;
        std::cout << c << std::endl;
    }
};

class derived_private : private base {
    public:
    void out2() {
        std::cout << a << std::endl;
        std::cout << c << std::endl;
    }
};

int main() {
    derived_public obj1;
    obj1.out(); 

    derived_protected obj2;
    obj2.out1(); 

    derived_private obj3;
    obj3.out2(); 

    return 0;
}