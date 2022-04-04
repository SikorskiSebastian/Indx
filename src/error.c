#include "error.h"

void checkFile(FILE* in, char** argv){
	if(in == NULL) {
		fprintf( stderr, "%s: ERROR I CAN'T READ FROM FILE %s\n", argv[0], argv[1] );
		exit(EXIT_FAILURE);
	}    
}

void checkNumOfWords(int howManyWords, char** argv){
	if(howManyWords == 0) {
		fprintf( stderr, "%s: ERROR PLS GIVE WORDS TO FIND\n", argv[0] );
		exit(EXIT_FAILURE);
	}    
}