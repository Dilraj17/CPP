#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter a number: ";
    cin>>a;
    for (i = 2; i <= a/2; i++)
    {
        if (a%i==0)
        {
            cout<<"The number is not prime\n";
            break;
        }
        else
        {
            cout<<"The number is prime\n";
        }
    }
    return 0;
}