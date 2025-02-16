#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float mas[100];
    float chislo;
    char ch;
    int i = 0;
    do {
        cout << "Введите число: ";
        cin >> chislo;
        mas[i++] = chislo;
        cout << "Продолжим?(y/n)" << endl;
        cin >> ch;
    } while (ch == 'y');
    cout << "No sort" << endl;
    for (int j = 0; j < i; j++) {
        cout << mas[j] << endl;
    }
    cout << "Sort" << endl;
    sort(mas, mas + i);
    for (int j = 0; j < i; j++) {
        cout << mas[j] << endl;
    }
    _getch();
}