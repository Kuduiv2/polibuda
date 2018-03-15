#include "WyrazenieZesp.hh"



///*!
// * Modeluje zbior operatorow arytmetycznych.
// */
//enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



///*
// * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
// */
//struct WyrazenieZesp {
//  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
//  Operator     Op;     // Opertor wyrazenia arytmetycznego
//  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
//};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


void Wyswietl(WyrazenieZesp  WyrZ)
{
  std::cout << WyrZ.Arg1;
  if (WyrZ.Op==0)std::cout <<" + ";
  else if (WyrZ.Op==1)std::cout <<" - ";
  else if (WyrZ.Op==2)std::cout <<" * ";
  else if (WyrZ.Op==3)std::cout <<" / ";
  else std::cout <<"cpt. sum ting wong/n wei too hei";
  std::cout << WyrZ.Arg2<<std::endl;
}
LZespolona Oblicz(WyrazenieZesp  WyrZ){
  LZespolona Wynik;

  if (WyrZ.Op==Op_Dodaj)        Wynik = WyrZ.Arg1 + WyrZ.Arg2;                          // +
  else if (WyrZ.Op==Op_Odejmij) Wynik = WyrZ.Arg1 - WyrZ.Arg2;                          // -
  else if (WyrZ.Op==Op_Mnoz)    Wynik = WyrZ.Arg1 * WyrZ.Arg2;                          // *
  else if (WyrZ.Op==Op_Dziel)   Wynik = WyrZ.Arg1 / WyrZ.Arg2;                          // /
  
  return Wynik;
}

/*
-niekoniecznie potrzebna funkcja

std::istream& operator >> (std::istream &Strm, LZespolona  &Skl1)
{
  double a;
  std::cout<<"czesc rzeczywista:";
  std::cin>>a;
  Skl1.re=a; 
  std::cout<<"czesc urojona:";
  std::cin>>a;
  Skl1.im=a;

return Strm;    
}
*/

std::ostream& operator << (std::ostream &Strm, const WyrazenieZesp  &Skl1)
{
  std::cout << Skl1.Arg1;
  if (Skl1.Op==0)std::cout <<" + ";
  else if (Skl1.Op==1)std::cout <<" - ";
  else if (Skl1.Op==2)std::cout <<" * ";
  else if (Skl1.Op==3)std::cout <<" / ";
  else std::cout <<"cpt. sum ting wong/n wei too hei";
  std::cout << Skl1.Arg2;
return Strm;
}

//#endif
