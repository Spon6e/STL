#include <vector>
#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> v1 = { 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 };
    vector<int> v2(10);
    vector<int> v3;
    int start, stop;
    cout << "Введите номер элемента с которого хотите начать(0-10) : ";
    cin >> start;
    cout << "Введите номер элемента которым хотите закончить(start-10) : ";
    cin >> stop;
    vector<int>::iterator nachalo;
    vector<int>::iterator konec;
    nachalo = v1.begin() + start;
    konec = v1.begin() + stop;
    vector<int>::iterator iter;
    vector<int>::iterator iter1;
    for (iter1 = nachalo; iter1 != konec; iter1++)
        v3.push_back(*iter1);
    for (iter1 = v3.begin(); iter1 != v3.end(); iter1++) {
        cout << *iter1 << endl;
    }
    iter = copy(nachalo, konec, v2.begin());
    iter1 = v2.begin();
    cout << endl << "copy" << endl;
    while (iter1 != iter) {
        cout << *iter1++ << endl;
    }
}

