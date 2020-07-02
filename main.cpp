#include <iostream>
#include <string>

#include "Pracownik.h"
using namespace std;
int main() {
	Pracownik pracownik1 = {"Jan","Kowalski","0123456789", 40, "tynkarz" };
	Pracownik pracownik2 = { "Adam","Nowak","9876543210", 51 ,"murarz" };
	Pracownik pracownik3 = { "Stefan","Batory","134678520", 37 ,"policjant" };

	pracownik1.print();
	pracownik2.print();
	pracownik3.print();

	system("Pause");
	return 0;
}