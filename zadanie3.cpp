using namespace std;

int main()
{
	float a, b;
	cout << "Sprawdzanie ktora liczba zmiennoprzecinkowa jest wieksza" << endl;
	cout << "Podaj pierwsza liczbe zmiennoprzecinkowa: ";
	cin >> a;
	cout << "Podaj druga liczbe zmiennoprzecinkowa: ";
	cin >> b;
	if (a > b) {
		cout << "Liczba " << a << " jest wieksza niz liczba " << b;
	}
	else {
		cout << "Liczba " << b << " jest wieksza niz liczba " << a;
	}


}