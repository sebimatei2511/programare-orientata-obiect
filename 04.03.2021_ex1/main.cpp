#include <iostream>
#include<Math.h>
using namespace std;
int main()
{
    int a=2,b=5,c=1;
    double x=2.5,y=1.1,z=1.6;
    Math op;
    cout<<"a="<<a<<'\n';
    cout<<"b="<<b<<'\n';
    cout<<"c="<<c<<'\n';
    cout<<"x="<<x<<'\n';
    cout<<"y="<<y<<'\n';
    cout<<"z="<<z<<'\n';
    cout<<"a+b"<<op.Add(a,b)<<'\n';
    cout<<"a+b+c"<<op.Add(a,b,c)<<'\n';
    cout<<"x+y"<<op.Add(x,y)<<'\n';
    cout<<"x+y+z"<<op.Add(x,y,z)<<'\n';
    cout<<"a+b"<<op.Mul(a,b)<<'\n';
    cout<<"a+b+c"<<op.Mul(a,b,c)<<'\n';
    cout<<"x+y"<<op.Mul(x,y)<<'\n';
    cout<<"x+y+z"<<op.Mul(x,y,z)<<'\n';
    cout<<"Suma primelor 10 numere nenule este "<<op.Add(10,1,2,3,4,5,6,7,8,9,10)<<'\n';
    cout<<op.Add("abcd","efgh");
    return 0;
}
