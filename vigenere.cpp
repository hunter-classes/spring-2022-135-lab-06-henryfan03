#include <iostream>
#include <string>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) {
  std::string ciphertext = "";
  int rshift;
  int cipherascii;
  int count = 0;
  for (int i = 0; i < plaintext.length();i++) {
    int keyindex = count % keyword.length();
    cipherascii = int(keyword[keyindex]);
    if ((int(plaintext[i]) > 96) && (int(plaintext[i]) < 123)) {
      rshift = cipherascii - 97;
      //std::cout << rshift << std::endl;
      ciphertext += shiftChar(plaintext[i],rshift);
      count += 1;
    }
    else if ((int(plaintext[i]) > 64) && (int(plaintext[i]) < 91)) {
      rshift = cipherascii - 97;
      //std::cout << rshift << std::endl;
      ciphertext += shiftChar(plaintext[i],rshift);
      count += 1;
    }
    else {
      ciphertext += plaintext[i];
    }
  }
  return ciphertext;
}
