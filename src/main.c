#include "defs.h"
#include "insert.h"
#include "display.h"
#include "error.h"

char *words[MAXWORDS];
int howManyWords = 0;
int lines[MAXWORDS][MAXLINES]; // tu zapisujemy numery linii
                              // linie[i][0] to licznik
                              // linie[i][1] ... to nr-y linii, w których wystąpiło słowo

int main(int argc, char **argv) {
	FILE *in= argc > 1 ? fopen(argv[1], "r") : NULL;

	checkFile(in, argv);
	insert(&howManyWords, lines, words, argc, argv);
	checkNumOfWords(howManyWords, argv);

	readFromFile(in, howManyWords, words, lines);

	displayitems(howManyWords, lines, words);

	exit(EXIT_SUCCESS);
}