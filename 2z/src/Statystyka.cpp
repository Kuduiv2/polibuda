#include <iostream>
#include "Statystyka.hh"

using namespace std;


//  struct Statystyka {
//  unsigned int    Glod;    /* Ilosc poprawnych odpowiedzi */
//  unsigned int    Suma;    /* ilosc zadanych równań */
//  };


/*
 * oznacza poprawną odpowiedź w statystyce.
 */
void Dobra(Statystyka &Skl1){Skl1.Glod++;Skl1.Suma++;}
/*
 * oznacza niepoprawną odpowiedź w statystyce.
 */
void Zla(Statystyka &Skl1){Skl1.Suma++;}
/*
 * inicjalizuje statystykę zerami
 */
void Inicjalizuj(Statystyka &Skl1){Skl1.Glod=0;Skl1.Suma=0;}
/*
 * wyświetla statystyki testowanego
 */
std::ostream& operator << (std::ostream &Strm, const Statystyka  &Skl1){
    double a,b,c;
    a=Skl1.Glod;
    b=Skl1.Suma;
    c=a*100/b;
    cout<<"\nilosc poprawnych odpowiedzi: "<< Skl1.Glod;
    cout<<"\nilosc niepoprawnych odpowiedzi: "<< Skl1.Suma-Skl1.Glod;
    cout<<"\nilosc zadanych pytan: "<<Skl1.Suma;
    cout<<"\nprocent poprawnych odpowiedzi: "<<c<<"%"<<endl;
    return Strm;
    }
