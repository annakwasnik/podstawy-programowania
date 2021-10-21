using namespace std;

int main()
{
    int a;
    cout << "Sprawdzanie czy liczba jest parzysta" << endl;
    cout << "Podaj liczbe: ";
    cin >> a;
    if (a%2 == 0) {
        cout << "Liczba "<<a<<" jest parzysta";
    }
    else {
        cout << "Liczba " <<a<<" jest nieparzysta";
    }
}