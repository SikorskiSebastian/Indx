#include "insert.h"

void readFromFile(FILE *in, int howManyWords, char **words, int linie[MAXWORDS][MAXLINES]) {
	char buf[BUFSIZE];
	int howManyLines = 0;

	while(fgets(buf, BUFSIZE, in) != NULL ){
		howManyLines++;
		for( int i= 0; i < howManyWords; i++ ){
			if(strstr(buf, words[i]) != NULL ) {
				linie[i][0]++;
				linie[i][linie[i][0]]= howManyLines;
			}
		}
	}
}

void insert(int *howManyWords, int lines[MAXWORDS][MAXLINES], char **words, int argc, char **argv){
	for(int i= 2; i < argc; i++ ) {
		words[*howManyWords]= argv[i];
		lines[*howManyWords][0]= 0;
		(*howManyWords)++;
	}
}