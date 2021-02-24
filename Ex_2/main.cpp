#include <iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
int string_to_int(char x[10])
{
    int number=0,i,other;
    for(i=0; i<strlen(x); i++)
    {
        other=x[i]-'0';
        number=number*10+other;
    }
    return number;
}
int main()
{
    int number;
    int sum=0;
    char line[1000];
    FILE *pFile;
    pFile=fopen("ini.txt","r");
    if(pFile)
        while(fgets(line,1000,pFile))
        {
            number=string_to_int(line);
            sum+=number;
        }
    fclose(pFile);
    printf("%d",sum);
    return 0;
}
