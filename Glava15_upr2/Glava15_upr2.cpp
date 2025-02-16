#include <string>
#include <iostream>
#include <algorithm>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> mas;
    string slovoSPB;
    char ch;
    int i = 0;
    do {
        cout << "Введите слово: ";
        cin >> slovoSPB;
        cout << "Продолжим?(y/n)" << endl;
        cin >> ch;
        mas.push_back(slovoSPB);
        i++;
    } while (ch == 'y');
    cout << "no sort" << endl;
    for (int j = 0; j < i; j++) {
        cout << mas[j] << endl;
    }
    cout << "sort" << endl;
    sort(mas.begin(), mas.end());
    for (int j = 0; j < i; j++) {
        cout << mas[j] << endl;
    }
    _getch();
}
