#include "display.h"

void displayitems(int howManyWords, int lines[MAXWORDS][MAXLINES],char *words[MAXWORDS]){
	for(int i = 0; i < howManyWords; i++) {
		if(lines[i][0] > 0) { 
			printf( "słowo \"%s\" wystąpiło w liniach:", words[i] );
			for(int j = 1; j <= lines[i][0]; j++ )
				printf( " %d", lines[i][j] );
			printf( "\n" );
		} else {
		  printf( "nie napotkano słowa. \"%s\"\n", words[i] );
		}
	}
}
