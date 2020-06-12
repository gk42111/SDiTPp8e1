#pragma once
#include <iostream>
#include <string>

using namespace std;
class Pracownik
{
public:

	string imie;
	string nazwisko;
	string pesel;
	void print() {
		cout << "\n" << imie << "\n" << nazwisko<<"\n" << pesel << endl;
	}
};

class Nazwa {
public:
	Pracownik pracownik;
	int wiek;
	string stanowisko;
	void print() {
		pracownik.print();
		cout << wiek << "\n" << stanowisko << endl;
	}
};

