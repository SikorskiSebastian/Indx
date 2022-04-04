#ifndef _WORDS_H_
#define _WORDS_H_

#include "defs.h"

// funkcja czyta plik i sprawdza czy wystapiły w niej szukane slowa i zapisuje linie wystpien
void readFromFile(FILE *in, int howManyWords, char **words, int lines[MAXWORDS][MAXLINES]);

//zapisuje liczbe slow do wyszukania
void insert(int *howManyWords, int lines[MAXWORDS][MAXLINES], char **words, int argc, char **argv);

#endif