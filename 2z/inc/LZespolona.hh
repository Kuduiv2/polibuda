#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);


/*moje*/
double modul (LZespolona  Skl1);                                               //don
LZespolona  sprzerzenie (LZespolona  Skl1);                                    //don
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);                  //don
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);                  //don
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);                  //don
LZespolona  operator * (LZespolona  Skl1,  double  Skl2);                      //don
LZespolona  operator / (LZespolona  Skl1,  double  Skl2);                      //don

bool  Wczytaj(LZespolona &Skl1);                                               //
  
bool  operator == (LZespolona  Skl1,  LZespolona Skl2);                        //don
bool  operator < (LZespolona  Skl1,  LZespolona Skl2);                         //fail
bool  operator > (LZespolona  Skl1,  LZespolona  Skl2);                        //fail
bool  operator >= (LZespolona  Skl1,  LZespolona  Skl2);                       //fail
bool  operator <= (LZespolona  Skl1,  LZespolona  Skl2);                       //fail
bool  operator != (LZespolona  Skl1,  LZespolona  Skl2);                       //don


std::istream& operator >> (std::istream &Strm, LZespolona  &Skl1);             //don

std::ostream& operator << (std::ostream &Strm, const LZespolona  &Skl1);       //don
void wyswietl(LZespolona Skl1);                                                //don
#endif
