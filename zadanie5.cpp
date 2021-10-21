using namespace std;

int main()
{
	float a, b;
	int calc;
	cout << "Kalkualtor " << endl;
	cout << "Podaj pierwsza liczbe" << endl;
	cin >> a;
	cout << "Podaj druga liczbe" << endl;
	cin >> b;
	cout << "Wybierz dzialanie matematyczne: " << endl;
	cout << "1.Dodawanie" << endl << "2.Odejmowanie" << endl << "3.Mnozenie" << endl << "4.dzielenie" << endl;
	cin >> calc;
	switch (calc) {
	case 1:
		cout << "Wynik dodawania to: " << a+b;
		break;
	case 2:
		cout << "Wynik odejmowania to: " << a - b;
		break;
	case 3:
		cout << "Wynik mnozenia to: " << a * b;
		break;
	case 4:
		if (b > 0) {
			cout << "Wynik dzielenia to: " << a / b;
		}
		else {
			cout << "Nie dzielimy przez 0! Brak wyniku.";
		}
		break;
		}
	}