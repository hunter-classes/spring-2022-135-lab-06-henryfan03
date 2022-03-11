#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "vigenere.h"
#include "caesar.h"
#include "decrypt.h"

TEST_CASE("Encrypt Caesar") {
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("Encrypt Vigenere") {
  CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("Decrypt Caesar") {
  CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
  CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
}

TEST_CASE("Decrypt Vigenere") {
  CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
}

TEST_CASE("Caesar Equivalents") {
  CHECK(encryptCaesar("Hello, World!", 0) == "Hello, World!");
  CHECK(encryptCaesar("Hello, World!", 26) == "Hello, World!");
}

TEST_CASE("Non-encryped Plaintexts") {
  CHECK(encryptCaesar("!!!!!!!", 5) == "!!!!!!!");
  CHECK(encryptCaesar("   ", 5) == "   ");
  CHECK(encryptCaesar(",,,", 5) == ",,,");
  CHECK(decryptCaesar("!!!!!!!", 5) == "!!!!!!!");
  CHECK(decryptCaesar("   ", 5) == "   ");
  CHECK(decryptCaesar(",,,", 5) == ",,,");
  CHECK(encryptVigenere("!!!!!!!", "cake") == "!!!!!!!");
  CHECK(encryptVigenere("   ", "cake") == "   ");
  CHECK(encryptVigenere(",,,", "cake") == ",,,");
  CHECK(decryptVigenere("!!!!!!!", "cake") == "!!!!!!!");
  CHECK(decryptVigenere("   ", "cake") == "   ");
  CHECK(decryptVigenere(",,,", "cake") == ",,,");
}
