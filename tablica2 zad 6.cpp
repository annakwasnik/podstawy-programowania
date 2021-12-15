#include <iostream>
#include <string>
using namespace std;

int main()
{
    string badany_tekst;
    cout << "Wprowadz tekst: ";
    getline(cin, badany_tekst);

    string spolgloski = "bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";
    int  n_spolgloski = 0;

    string samogloski = "aeiyouAEIYOU";
    int n_samogloski = 0;

    for (int i = 0; i < badany_tekst.length(); i++) {

        for (int j = 0; j < spolgloski.length(); j++) {
            if (badany_tekst[i] == spolgloski[j]) n_spolgloski++;

            for (int j = 0; j < samogloski.length(); j++) {
                if (badany_tekst[i] == samogloski[j]) n_samogloski++;

            }
        }
    }

    cout << "D³ugoœæ teksu: " << badany_tekst.length << endl;
    
    cout << "Spolgloski (suma): " << n_spolgloski << endl;

    cout << "Samogloski(suma): " << n_samogloski << endl;

    system("PAUSE");
}

