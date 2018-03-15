#include "LZespolona.hh"
#include <iostream>
#include <limits>
//#include <string>
/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

/*moje*/


bool Wczytaj(LZespolona &Skl1){
  LZespolona Wynik;
  char znak;
  double a;

  std::cout<<"\n";
  std::cin>>znak;
  if(znak!='('){
    std::cin.setstate(std::ios::failbit);\
    std::cerr<<"das is nat otwarcie naiwasó\n";
  }else{
  std::cin>>a;
  if(!std::cin.good())std::cerr<<"Cpt. sum ting wong, dats nat dobl\n";
  else{  Wynik.re=a;
  std::cin>>a;
  if(!std::cin.good())std::cerr<<"Cpt. sum ting wong, dats nat dobl\n";
  else { Wynik.im=a;
  std::cin>>znak; 
  if(znak!='i'){
    std::cin.setstate(std::ios::failbit);\
    std::cerr<<"das is nat urojona\ntry again\n";}
    else {
  std::cin>>znak; 
  if(znak!=')'){
    std::cin.setstate(std::ios::failbit);\
    std::cerr<<"das is nat zamknięcie naiwasó\ntry again\n";
  }else{
    //wczytanie przebiegło pomyślnie
    Skl1=Wynik;
    return false;}}}}}
  std::cin.clear();
  std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
  
  return true;}



std::istream& operator >> (std::istream &Strm, LZespolona  &Skl1)
{
  LZespolona Wynik;
  char znak;
  double a;
  std::cout<<"\n";
  Strm >> znak;
  if(znak!='('){
    Strm.setstate(std::ios::failbit);\
    std::cerr<<"das is nat otwarcie naiwasó\n";
  }
  //********************
  else {
    Strm >>a; Wynik.re=a;
  if(!Strm.good())std::cerr<<"Cpt. sum ting wong, dats nat dobl\n";
  else { 
    Strm >>a; Wynik.im=a;
  if(!Strm.good())std::cerr<<"Cpt. sum ting wong, dats nat dobl\n";
  else {
    Strm >>znak;
  if(znak!='i')Strm.setstate(std::ios::failbit);
  else{  Strm >>znak;
  if(znak!=')')Strm.setstate(std::ios::failbit);
  else {
    //std::cout<<"\n\ngood"<<Strm.good()<<"\n\n"<<Wynik<<"\n\n";
    Skl1=Wynik;return Strm;}}}}}
  Strm.clear();
  Strm.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
  std::cerr<<"try again\n";
  if (Wczytaj(Skl1)==true){
    std::cerr<<"try again\n";
    if(Wczytaj(Skl1)==true)std::cerr<<"cosik nie poszło. Idziemy dalej\n";}
   
return Strm;    
}
/*
std::istream& operator >> (std::istream &Strm, LZespolona  &Skl1)
{
  int tmp = 0;
  // bool padło = false;
  double a;
  std::cout<<"czesc rzeczywista:";
  std::cin>>a;
  //-----------------------------------------------------------------------------
  while (!std::cin.good()){
    std::cerr<<"niepoprawny format odpowiedzi. spróbuj wpisać to jeszcze raz poprawnie\n";
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
    if (++tmp==3)exit(1);
    else  std::cin>>a;
  }
  //-----------------------------------------------------------------------------
  tmp=0;
  Skl1.re=a; 
  std::cout<<"czesc urojona:";
  std::cin>>a;
  //-----------------------------------------------------------------------------
  while (!std::cin.good()){
    std::cerr<<"niepoprawny format odpowiedzi.";
    if (++tmp!=3)std::cerr<<"spróbuj wpisać to jeszcze raz poprawnie\n";
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
    if (tmp==3){
      std::cerr<<"\n no to może przejdźmy do kolejnego pytania\n";
      exit(1);
    }
    else  std::cin>>a;
  }
  //-----------------------------------------------------------------------------
  Skl1.im=a;

return Strm;    
}*/

std::ostream& operator << (std::ostream &Strm, const LZespolona  &Skl1)
{
std::cout << "( " << Skl1.re <<  std::showpos << Skl1.im<<" i ) "<< std::noshowpos;
return Strm;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

void wyswietl(LZespolona Skl1)
{
  std::cout << "(" << Skl1.re <<" "<< std::showpos << Skl1.im<<"i )" << std::noshowpos;
}

LZespolona  sprzerzenie (LZespolona  Skl1)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re;
  Wynik.im = 0 - Skl1.im;
  return Wynik;
}
/*
  LZespolona  Wynik;

  Wynik.re = (Skl1.re * Skl2);
  Wynik.im = (Skl1.im * Skl2);
  return Wynik;
*/

LZespolona  operator / (LZespolona  Skl1,  double  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = (Skl1.re / Skl2);
  Wynik.im = (Skl1.im / Skl2);
  return Wynik;
}

//mniżenie i dzielnie przez zespoloną
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  Wynik.re = (Skl1.re * Skl2.re) - (Skl1.im * Skl2.im);
  Wynik.im = (Skl2.re * Skl1.im) + (Skl1.re * Skl2.im);
  return Wynik;
}

double modul (LZespolona  Skl1)
{
  LZespolona  Wynik;
  
  Wynik = Skl1 * sprzerzenie (Skl1);
  return Wynik.re;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  LZespolona temp1,temp2;
  temp1 = ( Skl1 * sprzerzenie ( Skl2 ) );
  temp2= ( Skl2  * sprzerzenie ( Skl2 ) );
  Wynik=temp1/temp2.re;
  
  return Wynik;
}


bool  operator != (LZespolona  Skl1,  LZespolona  Skl2){
if (Skl1.re==Skl2.re || Skl1.im==Skl2.im)return false;
else return true; }
bool  operator == (LZespolona  Skl1,  LZespolona Skl2){
if (Skl1.re!=Skl2.re || Skl1.im!=Skl2.im)return false;
else return true; }
//bool  operator < (LZespolona  Skl1,  LZespolona Skl2);
//bool  operator > (LZespolona  Skl1,  LZespolona  Skl2);
//bool  operator >= (LZespolona  Skl1,  LZespolona  Skl2)
//bool  operator <= (LZespolona  Skl1,  LZespolona  Skl2);
