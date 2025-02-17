#include <algorithm>
#include <iostream>
#include <conio.h>
#include <list>
using namespace std;

int main()
{
    list<int> spisok;
    list<int>::iterator iter1;
    list<int>::iterator iter2;
    for (int i = 0; i < 16; i++)
        spisok.push_back(i);
    iter1 = spisok.begin();
    iter2 = spisok.end();
    iter2--;
    while (iter1 != iter2) {
        swap(*iter1, *iter2);
        iter2--;
        if (iter1 != iter2)
            iter1++;
    }
    iter1 = spisok.begin();
    while (iter1!=spisok.end())
        cout << *iter1++ << " ";
    _getch();
}