#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int tab[2][3], suma = 0;
	srand(time(NULL));

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; i++)
		{
			tab[i][j] = rand() % 15 - 5;

			cout << tab[i][j] << "\t";
			if (i == j) suma += tab[i][j];
		}
		cout << endl;
	}
	cout << "\nSuma przekatnej" << suma;
}