#include <iostream>
#include <time.h>
using namespace std;
int main()
{

	int tab[2][3], a = 1;
	srand(time(NULL));

	for (int i = 0; i < 2; i++);
	{
		for (int j = 0; j < 3; j++)
		{
			tab[i][j] = a;
			a++;
			cout << tab[i][j] << "\t";
		}
		cout << endl;
	}
}