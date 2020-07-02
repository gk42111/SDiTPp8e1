#pragma once
#include <iostream>
#include <string>

using namespace std;
class Nazwa
{
public:
	string imie;
	string nazwisko;
	string pesel;
	void print() {
		cout << imie << "\n" << nazwisko << "\n" << pesel << endl;
	}
};

class Pracownik {
public:
	Nazwa agregat;
	int wiek;
	string stanowisko;
	void print() {
		agregat.print();
		cout << wiek << "\n" << stanowisko << "\n"<< endl;
	}
};