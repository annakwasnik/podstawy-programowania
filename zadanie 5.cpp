//zadanie5
int main()
{
  int n, suma = 0;
  cout << "podaj n: ", cin>>n;
  if (n0) {
    for (int i = 0; i<n; i++)
    {
      cout << "podaj liczbe: ", cin >> liczba;
      if (liczba %2 ==0) suma += licza;
    }
    cout << "suma liczb parzystych: "<< suma <<endl;
  }
  else cout << "n nie moze byc liczba <=0\n";
  do
  {
    cout <<"podaj n: ", cin >>n;
  } while (true);
  {
    cout << "podaj ponownie n: ", cin >> n;
    if (n> 0) {
      for (int i=0; i<n, i++)
      {
        cout<< :"podaj liczbe: ", cin >> liczba;
        liczba = rand() % 26+10;
        cout << liczba << " ";
        if (liczba %2 == 0) suma += liczba;
      }
      cout << "suma liczb parzystych: " << suma<<endl;
      break;
    }
    else continue;
  }
  
}