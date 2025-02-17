#include <conio.h>
#pragma warning (disable:4786)
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <iomanip>
using namespace std;

class person {
private:
    string familia;
    string ima;
    unsigned long dom_tel;
public:
    person(): familia("пусто"), ima("пусто"), dom_tel(0L) {}
    person(string F, string N, unsigned long T) {
        familia = F;
        ima = N;
        dom_tel = T;
    }
    void display() const {
        cout << "Фамилия: " << setw(12) << familia << ",\t";
        cout << "Имя: " << setw(10) << ima << ",\t";
        cout << "Домашний номер телефона: " << dom_tel << endl;
    }
    friend bool operator<(const person&, const person&);
};
bool operator<(const person& p1, const person& p2) {
    if (p1.familia < p2.familia)
        return true;
    else
        if (p1.familia == p2.familia)
            if (p1.ima < p2.ima)
                return true;
    return false;
}

class comparePerson {
public:
    bool operator()(const person* ptr1, const person* ptr2) const {
        return *ptr1 < *ptr2;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");  
    multiset<person*, comparePerson> per; 
    multiset<person*, comparePerson>::iterator iter;
    person* T1 = new person("Yasmy", "Denis", 162);
    person* T2 = new person("Obladaet", "Nazar", 99);
    person* T3 = new person("Friendly", "Tug", 52);
    person* T4 = new person("Whole", "Swag", 68);
    person* T5 = new person("Yasmy", "Denis", 65);
    person* T6 = new person("Markul", "Mark", 10000);
    person* T7 = new person("Oxxxy", "Miron", 30);
    person* T8 = new person("Macan", "Andrey", 200218);
    person* T9 = new person("White", "Gallows", 16);
    person* T10 = new person("Obladaet", "Nazar", 735);
    person* T11 = new person("Markul", "Mark", 7);
    person* T12 = new person("Macan", "Andrey", 21);

    per.insert(T1);
    per.insert(T2);
    per.insert(T3);
    per.insert(T4);
    per.insert(T5);
    per.insert(T6);
    per.insert(T7);
    per.insert(T8);
    per.insert(T9);
    per.insert(T10);
    per.insert(T11);
    per.insert(T12);
    
    cout << "Множество которое упорядочено при создании: " << endl;
    for (iter = per.begin(); iter != per.end(); iter++) {
        (**iter).display();
    }
    iter = per.begin();
    while (iter != per.end()) {
        delete* iter;
        per.erase(iter++);
    }
    _getch();
}
