#include <iostream>
#include "BazaTestu.hh"
#include "Statystyka.hh"
using namespace std;




int main(int argc, char **argv)
{
  Statystyka Stat;
  LZespolona Wynik, Odpowiedz;
  Inicjalizuj(Stat);
  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
   
    cout << WyrZ_PytanieTestowe << endl;
    Wynik = Oblicz(WyrZ_PytanieTestowe);
    cout << Wynik << endl;
    cin >> Odpowiedz;
    if (Odpowiedz==Wynik){
      cout<<"poprawna odpowiedź\n"<<endl;
      Dobra(Stat);}
    else {cout<<"niepoprawna odpowiedź\n"<<endl;
    Zla(Stat);}
    
  }
  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << Stat;
  cout << endl;

}
/*


int main()
{
  WyrazenieZesp  WyrZ;
  WyrZ.Op = Op_Dodaj;
  LZespolona Z1,Z2,Z3;
  std::cin >> Z1;
  //Z1.re=4;
  //Z1.im=5;
  Z2.re=2;
  Z2.im=1;
  Z3.re=0;
  Z3.im=3;
  std::cout<<WyrZ.Op<<endl;
  wyswietl (Z1 + Z2 );
  std::cout <<endl;
  wyswietl (Z2 - Z3 );
  std::cout <<endl;
  wyswietl (Z1 * Z3 );
  std::cout <<endl;
  wyswietl (Z1 / Z2 );
  std::cout <<endl;

  
  
  return 0;
}
*/
