#include <conio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<string, less<string> > GGP;
    set<string, less<string> >::iterator iter;
    GGP.insert("Pobeg iz shou");
    GGP.insert("Zelenaa mila");
    GGP.insert("Zelenaa kniga");
    GGP.insert("Punkt naznachenia");
    GGP.insert("Ford vs Ferrari");
    GGP.insert("2048");
    iter = GGP.begin();
    while (iter != GGP.end())
        cout << *iter++ << endl;
    string lower, upper;
    cout << "Vvedi nizh granicu: ";
    cin >> lower;
    cout << "Vvedi verhnuu granicu: ";
    cin >> upper;
    iter=GGP.lower_bound(lower);
    while (iter != GGP.upper_bound(upper))
        cout << *iter++ << endl;
    _getch();
}
