#include <iostream>
#include <string>

char shiftChar(char c, int rshift) {
  char encodedchar = c + rshift;
  return encodedchar;
}

std::string encryptVigenere(std::string plaintext, std::string keyword) {
  std::string ciphertext = "";
  int rshift;
  int cipherascii;
  for (int i = 0; i < plaintext.length();i++) {
    keyindex = i % keyword.length();
    cipherascii = int(keyword[keyindex]);
    if (cipherascii > 96 && cipherascii < 123)) {
      rshift = cipherascii - 97;
      ciphertext += shiftChar(plaintext[i],rshift);
    }
    else if (cipherascii > 64 && cipherascii < 91) {
      rshift = cipherascii - 65;
      ciphertext += shiftChar(plaintext[i],rshift);
    }
    else {
      ciphertext += plaintext[i];
    }
  }
  return ciphertext;
}
