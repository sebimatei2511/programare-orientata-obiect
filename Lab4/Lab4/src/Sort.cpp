#include "Sort.h"
#include<time.h>

void Sort::InsertSort(bool ascendent=false)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    ascendent=true;
}

void Sort::Sort(int nr_elem, int minim, int maxim)
{
    this->nr_elem=nr_elem;
    this->myarr=(int*)malloc(nr_elem*sizeof(int));
    time_t t;
    srand((unsigned)time(&t));
    int i;
    for(i=0;i<nr_elem;i++)
        this->myarr[i]=minim+rand()%(maxim-minim+1);
}

int Sort::Sort(): myarr(new int[5] {5,4,3,2,1})
{
    this->nr_elem=5;
}

int Sort::Sort(int count, ...)
{
    this->nr_elem=count;
    this->myarr=(int*)malloc(count*sizeof(int));
    va_list parg;
    va_start(parg,count);
    rep(i,count)
    {
        this->myarr[i]=va_arg(parg,int);
    }
    va_end(parg);
}

void Sort::BubbleSort(bool ascendent=false)
{
    int i, j, aux;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            {
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
}

void Sort::Print()
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int Sort::Sort(char* sir)
{
    char* p;
    p=strtok(sir,",");
    v=new int[strlen(sir)+1];
    int ct=0,val;
    while(p)
    {
        char* nr;
        nr=new int[strlen(p)+1];
        strcpy(nr,p);
        int el=0,putere=1;
        for(int i=0;i<strlen(nr)-1;i++)
            putere*=10;
        for(i=0;i<strlen(nr);i++)
        {
            val=nr[i]-'0';
            el=el+putere*val;
            putere/=10;
        }
        v[ct]=el;
        ct++;
        p=strtok(NULL,",");
    }
}
