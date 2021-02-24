#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char sentence[100];
    int i,j;
    int sw;
    char sww[20];
    int contor=0;
    char *p;
    int nr_words=1;
    scanf("%[^\n]s", sentence);
    for(i=0; i<strlen(sentence); i++)
        if(sentence[i]==' ')
            nr_words++;
    struct
    {
        char word[20];
        int lenght;
    } x[nr_words];
    p=strtok(sentence," ");
    i=0;
    while(p)
    {
        strcpy(x[i].word,p);
        x[i].lenght=strlen(p);
        p=strtok(NULL," ");
        i++;
    }
    for(i=0; i<nr_words-1; i++)
        for(j=i+1; j<nr_words; j++)
            if(x[i].lenght<x[j].lenght)
            {
                sw=x[i].lenght;
                x[i].lenght=x[j].lenght;
                x[j].lenght=sw;
                strcpy(sww,x[i].word);
                strcpy(x[i].word,x[j].word);
                strcpy(x[j].word,sww);
            }
            else if(x[i].lenght==x[j].lenght)
                if(strcmp(x[i].word,x[j].word)>0)
                {
                    sw=x[i].lenght;
                    x[i].lenght=x[j].lenght;
                    x[j].lenght=sw;
                    strcpy(sww,x[i].word);
                    strcpy(x[i].word,x[j].word);
                    strcpy(x[j].word,sww);
                }
    for(i=0; i<nr_words; i++)
        printf("%s \n", x[i].word);
    return 0;
}
