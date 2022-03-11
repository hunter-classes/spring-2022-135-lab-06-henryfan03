main: main.o vigenere.o decrypt.o caesar.o
	g++ -o main main.o vigenere.o decrypt.o caesar.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp

tests: tests.o vigenere.o decrypt.o caesar.o
	g++ -o tests tests.o vigenere.o decrypt.o caesar.o

vigenere.o: vigenere.cpp vigenere.h caesar.h
	g++ -c vigenere.cpp caesar.cpp

decrypt.o: decrypt.cpp decrypt.h caesar.h
	g++ -c decrypt.cpp caesar.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

main.o: main.cpp vigenere.h decrypt.h caesar.h

tests.o: tests.cpp doctest.h vigenere.h decrypt.h caesar.h

clean:
	rm -f main tests test-ascii test-ascii.o main.o tests.o vigenere.o decrypt.o caesar.o
