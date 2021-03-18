#include "Number.h"
#include<iostream>
#includ<string.h>
using namespace std;

int Number::GetBase()
{
	return this->base;
}

int Number::GetDigitsCount()
{
	return strlen(this->value);
}

int Number::Number(const char* value, int base)
{
	this->base=base;
	int i=strlen(value)+1;
	this->value=new char[i];
	strcpy_s(this->value,i,value);
}

int Number::Number(const Number& m)
{
	this->base=m.base;
	this->value=new char[strlen(m.value)+1];
	strcpy_s(this->value,strlen(m.value)+1,m.value);
}

int Number::~Number()
{
	if (this->value != nullptr)
	{
		free(this->value);
		this->base = 0;
	}
}

void Number::Print()
{
	cout << this->value << "\n";
}

int Number::reVal(int nr)
{
	if (nr>=0&&nr<=9)
		return (char)(nr+'0');
	else
		return (char)(nr-10+'A');
}

void Number::SwitchBase(int newBase)
{
    int l=strlen(number),i,p=1,dec=0;
    for(i=lenght-1,i>=0;i--)
    {
        if(decimalValue(number[i])>=base)
        {
            cout<<"numar gresit";
            break;
        }
        dec=dec+decimalValue(number[i])*p;
        p=p*base;
    }
    char* nr=new char[101];
    i=0;
    while(dec>0)
    {
        nr[i]=charValue(dec%newBase);
        dec=dec/newBase;
        i++;
    }
    nr[i]='\0';
    _strrev(nr);
    int size=strlen(nr)+1;
    number=(char*)realloc(number,size);
    memcpy(number,nr,strlen(nr)+1);
    base=newBase;
}


