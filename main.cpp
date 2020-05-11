#include <iostream>
#include <string>

#include "Pracownik.h"
using namespace std;
int main() {
	Nazwa pracownik1 = { "Jan","Nazwisko","0123456789", 40 ,"tynkarz" };
	Nazwa pracownik2 = { "Adam","Nowak","9876543210", 51 ,"murarz" };
	Nazwa pracownik3 = { "Stefan","Batory","134678520", 37 ,"policjant" };

	pracownik1.print();
	pracownik2.print();
	pracownik3.print();

	system("Pause");
	return 0;
}