#include <conio.h>
#include <iostream>
#include <algorithm>
#include <list>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    list<int> g(5);
    list<int>::iterator gi;
    list<int>::iterator gi2;
    int k = 0;
    for (gi = g.begin(); gi != g.end(); gi++)
        *gi = k += 2;
    for (gi = g.begin(); gi != g.end(); gi++)
        cout << *gi << endl;
    gi = find(g.begin(), g.end(), 6);
    cout << *gi << endl;
    k = 0;
    gi2 = g.begin();
    while (gi != gi2) {
        k += 1;
        gi2++;
    }
    cout << k << " - место расположения 6ки";          //В двунаправленнм списке нельзя делать вычитание из итератора(gi-g.begin), в произвольном итераторе - можно
    _getch();
}