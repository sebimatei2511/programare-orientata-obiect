#include "Math.h"

int Math::Add(int a, int b)
{
    return a+b;
}

int Math::Add(int a, int b, int c)
{
    return a+b+c;
}

int Math::Add(double a, double b)
{
    return a+b;
}

int Math::Add(double a, double b, double c)
{
    return a+b+c;
}

int Math::Mul(int a, int b)
{
    return a*b;
}

int Math::Mul(int a, int b, int c)
{
    return a*b*c;
}

int Math::Mul(double a, double b)
{
    return a*b;
}

int Math::Mul(double a, double b, double c)
{
    return a*b*c;
}

int Math::Add(int count,...)
{
    va_list arg;
    va_start(arg, count);
    int sum=0;
    for(int i=1;i<=count;i++)
    {
        int elem=va_arg(arg,int);
        sum+=elem;
    }
    va_end(arg);
    return sum;
}

char* Add(const char * a, const char * b)
{
    if(a==nullptr||b==nullptr)
        return nullptr;
    else
    {
        char* sir=(char*)malloc(strlen(a)+strlen(b)+1);
        memset(sir,0,(strlen(a)+strlen(b)+1)*sizeof(char));
        memcpy(sir,a,strlen(a));
        memcpy(sir+strlen(a),b,strlen(b));
        return sir;
    }
}
