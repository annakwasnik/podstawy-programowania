int main()

int n, temp;
float pkt, suma = 0;

cout << "Podaj ilosc studentow: ", cin >> n; 
while (true)
{

  temp =n;
  if (n>0) {
    {

      cout<< "Podaj ilosc puntow: ", cin>> pkt;
      if (pkt >= 0 && pkt <= 100) {
        suma += pkt;
        n--;
      }
      else continue;
      if (n == =) break;
    }
    cout << "Suma punktów: " << suma <<endl;
    cout << "Srednia wynosi: " << suma /temp << endl;
  }
  else cout << "Ilosc studentow nie moze być ujemna\n";

}

