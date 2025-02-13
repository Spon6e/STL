#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

template <class Z>
void kuroga(Z);
template <class Z>
bool insilio(Z);

int main()
{
    setlocale(LC_ALL, "Russian");
    double G[] = { 10.4, 11.0, 10.64, 1.2 };
    int T[] = { 13, 41, 724, 14, 62, -11, -124 };
    for_each(G, G + 4, kuroga<double>);
    cout << "\n\n";
    for_each(T, T + 7, kuroga<int>);
    cout << "\n\n";
    if (find_if(G, G + 4, insilio<double>) != G + 4) {
        cout << "Первый подходящий вариант имеет номер: " << find_if(G, G + 4, insilio<double>) - G << endl;
    }
    else
        cout << "Sorry braza, сегодня не день Бекхэма..." << endl;
    _getch();
}
template <class Z>
void kuroga(Z chislo) {
    cout << chislo * chislo << endl;
}
template <class Z>
bool insilio(Z m) {
    return (m * m > 120) ? true : false;
}