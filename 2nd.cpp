#include <iostream>
using namespace std;
class facto{
    public:
    int fact(int n){
        if(n==0){
            return 1;
        }else{
            return n*fact(n-1);
        }
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    facto ob1;
    cout<<"The factorial of number is: "<<ob1.fact(n)<<endl;
    return 0;
}
