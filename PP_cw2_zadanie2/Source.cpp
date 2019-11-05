#include<iostream>
#include<iostream>
using namespace std;

//Napisać program, który umożliwi przeliczanie odległości z kilometrów na mile lądowe i odwrotnie.
//• Przeliczanie odbywa się według wzoru; współczynnik   należy zadeklarować jako stałą.
//• Każde przeliczanie powinno odbywać się w osobnej funkcji.
//• Należy sygnalizować wprowadzenie przez użytkownika odległości mniejszej niż 0.
//• Użytkownik powinien mieć wybór, czy chce przeliczać kilometry na mile czy  mile na kilometry.

double k = 0.621371192;

double mileDoKilometrow(double wejscie) {
	return wejscie / k;
}

double kilometryDoMil(double wejscie) {
	return wejscie * k;
}

int main() {
	int wybor;
	double wejscie, wynik ;

	cout << "Przelicz\n* Mile do kilometrow (1)\n* Kilometry Do Mil (2): ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "\n" << "Wprowadz wartosc do przeliczenia na kilometry: ";
		cin >> wejscie;
		if (wejscie < 0) {
			cout << "\n" << "Blad! Nie mozna przeliczyc wartosci mniejszej niz 0";
			return 0;
		}
		wynik = mileDoKilometrow(wejscie);
		cout << "\n" << wejscie << " mil to " << wynik << " km";

		break;
	case 2:
		cout << "\n" << "Wprowadz wartosc do przeliczenia na mile: ";
		cin >> wejscie;
		if (wejscie < 0) {
			cout << "\n" << "Blad! Nie mozna przeliczyc wartosci mniejszej niz 0";
			return 0;
		}
		wynik = kilometryDoMil(wejscie);
		cout << "\n" << wejscie << " km to " << wynik << " mil";

		break;
	default:
		cout << "\nzla opcja";
		break;
	}


}