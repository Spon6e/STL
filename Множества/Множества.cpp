#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    string name[] = { "Igor", "Egor", "Anton", "Lera", "Alex", "Natasha" };
    set<string, less<string> > imena(name, name + 6);
    set<string, less<string> >::iterator iter;
    imena.insert("Anna");
    imena.insert("Mary");
    imena.insert("Egor");
    imena.erase("Lera");
    iter = find(imena.begin(), imena.end(), "Egor");
    if (iter == imena.end())
        cout << "Egora net" << endl;
    else
        cout << "Egor est" << endl;
    for (iter = imena.begin(); iter != imena.end(); iter++)
        cout << *iter << "  ";
    string nname;
    cout << "\nVvedite ima: ";
    cin >> nname;
    for (iter = imena.begin(); iter != imena.end(); iter++)
        if (nname == *iter)
            break;
    if (iter == imena.end())
        cout << "Net takogo: " << nname;
    else
        cout << "Est takoi: " << nname;
    _getch();

}