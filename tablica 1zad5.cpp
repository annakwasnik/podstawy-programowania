#include <iostream>
#include <time.h>
using namespace std;
int main()
{

	int tab[10], min;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		if (i < 2) {
			cout << "Podaj tab[" << 1, "] =", cin >> tab[i];
		}
		else {
			tab[i] = tab[i - i] + tab[i - 2];
		}
	}
	for (int i = 0; i < 10; i++);
	{
		cout << tab[i] << "";
	}
}