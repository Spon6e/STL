#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

bool srav(const char*, const char*);


int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[8] = { 256,400,12,115,8,-3,71,0 };
    int arr1[8] = { 256,400,12,115,8, 8,71,0 };
    int arr2[8];
    int arr3[16];
    int sst[] = { 0, 8, 12 };
    const char* T[] = { "Данил", "Татьяна", "Михаил", "Мария" };

    sort(arr, arr + 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << endl;
    }

    int* n;
    n = find(arr, arr + 8, 8);
    cout << "Элемент -3 находится в позиции: " << n - arr << endl;
    
    int* p;
    p = search(arr, arr + 8, sst, sst + 3);
    if (p == arr + 8)
        cout << "без совпадений браза" << endl;
    else
        cout << "Совпадение с элемента: " << p - arr << endl;

    //cout << equal(arr, arr+8, arr1, arr1+8);
    
    cout << count(arr1, arr1 + 8, 8) << endl;
    
    copy(arr, arr + 8, arr2);
    for (int i = 0; i < 8; i++) {
        cout << "COPY: " << arr2[i] << endl;
    }
   
    /* swap(arr + 2, arr + 5);
    for (int i = 0; i < 8; i++) {
        cout << "swap: " << arr2[i] << endl;
    }*/

    sort(arr1, arr1 + 8);
    merge(arr, arr + 8, arr1, arr1 + 8, arr3);
    for (int i = 0; i < 16; i++) {
        cout << "MERGE: " << arr3[i] << endl;
    }

    sort(arr, arr + 8, greater<int>());             //сортировка в обратном порядке

    for (int i = 0; i < 4; i++) {
        cout << T[i]<< endl;
    }
    sort(T, T + 4, srav);
    for (int i = 0; i < 4; i++) {
        cout << T[i] << endl;
    }

    _getch();
}

bool srav(const char* l,const char* m) {
    return (strcmp(l, m) < 0) ? true : false;
}