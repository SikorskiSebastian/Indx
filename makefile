CCC = cc -c
CCO = cc -o
FLAGS = -Wall -pedantic -Wextra
DEL = -rm -r *.o index bin/
MD = -mkdir bin/
MV = mv *.o bin/

index: insert.o main.o display.o error.o
	$(CCO) $@ $^
	$(MD)
	$(MV)
insert.o: src/insert.c src/insert.h src/defs.h
	$(CCC) $< $(FLAGS)

display.o: src/display.c src/display.h src/defs.h
	$(CCC) $< $(FLAGS)

main.o: src/main.c src/insert.h src/display.h src/defs.h src/error.h
	$(CCC) $< $(FLAGS)

error.o: src/error.c src/error.h src/defs.h
	$(CCC) $< $(FLAGS)

clean:
	$(DEL)