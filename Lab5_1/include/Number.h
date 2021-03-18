#ifndef NUMBER_H
#define NUMBER_H


class Number

{

   int base;
   char* value;

public:

    Number(const char * value, int base);
    ~Number();
    friend Number operator+ (const Number& m, const Number& n);
    friend Number operator- (const Number& m, const Number& n);
    Number(const Number& m);
    int operator[](int index);
	int reVal(int nr);
	bool operator<(Number& m);
	bool operator>(Number& m);
	Number& operator=(Number m);
    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount();
    int  GetBase();

};

#endif // NUMBER_H
