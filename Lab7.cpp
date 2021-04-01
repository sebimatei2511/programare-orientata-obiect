#include <iostream>
using namespace std;

int operator"" _Kelvin(unsigned long long int x)
{
    x=x-273.15;
    return x;
}

int operator"" _Fahrenheit(unsigned long long int x)
{
    x=(x-32)/1.8;
    return x;
}

int main()
{
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
