#include <iostream>
#include <string>

char shiftChar(char c, int rshift) {
  char encodedchar = c + rshift;
  return encodedchar;
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (int i = 0;i < plaintext.length();i++) {
    ciphertext += shiftChar(plaintext[i],rshift)
  }
  return ciphertext;
}
