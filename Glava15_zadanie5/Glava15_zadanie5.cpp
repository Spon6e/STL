#include <algorithm>
#include <iostream>
#include <conio.h>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> ob(20);
    vector<int>::iterator iter;
    set<int> mnozh;
    set<int>::iterator iterm;
    int mas[10];
    for (int i = 0; i < 10; i++) {
        mas[i] = i * 2;
    }

    for (int i = 1; i < 20; i+=2) {
        mnozh.insert(i);
    }
    merge(mas, mas+10, mnozh.begin(), mnozh.end(), ob.begin());
    
    for (iter = ob.begin(); iter < ob.end(); iter++) {
        cout << *iter << endl;
    }
    _getch();
}