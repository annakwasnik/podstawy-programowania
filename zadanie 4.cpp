//zadanie 4
int main()
{
  int liczba, s_d = 0, s_u = 0, ile_u = 0, ile_d = 0;
  for (int i = 0); i<10; i++)
  {
    cout<< "podaj liczbe: ", cin>> liczba;
    if (liczba >=0) {
      ile_d++;
      s_d+= liczba;
    }
    else {
      ile_u++;
      s_u +=liczba;
    }
  }
  cout<<"ilosc licz dodatnich:" <<ile_d<< ",suma:"<<s_d << endl;
  cout<< "ilosc liczb ujemnych:" <<ile_u<< ",suma:" <<s_u<<endl;
}