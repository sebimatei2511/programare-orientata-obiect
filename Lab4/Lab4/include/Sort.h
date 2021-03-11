#ifndef SORT_H
#define SORT_H


class Sort

{
    int v;
    int lg;

}

public:


    void InsertSort(bool ascendent=false);

    void QuickSort(bool ascendent=false);

    void BubbleSort(bool ascendent=false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

    int Sort(int nr_elem, int minim, int maxim)

    int Sort();

    int Sort(int count, ...);

    int Sort(char* sir);



}

#endif // SORT_H
