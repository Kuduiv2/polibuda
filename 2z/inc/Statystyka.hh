#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH




/*
 * Modeluje pojecie statystyki bazującej na sumie 
 * zadanych pytań oraz poprawnych odpowiedzi
 */
struct Statystyka {
  unsigned int    Glod;    /* Ilosc poprawnych odpowiedzi */
  unsigned int    Suma;    /* ilosc zadanych równań */
};


/*
 * oznacza poprawną odpowiedź w statystyce.
 */
void Dobra(Statystyka &Skl1);
/*
 * oznacza niepoprawną odpowiedź w statystyce.
 */
void Zla(Statystyka &Skl1);
/*
 * inicjalizuje statystykę zerami
 */
void Inicjalizuj(Statystyka &Skl1);
/*
 * wyświetla statystyki testowanego
 */
std::ostream& operator << (std::ostream &Strm, const Statystyka  &Skl1);

#endif
