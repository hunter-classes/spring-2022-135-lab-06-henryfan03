#include <iostream>
#include <string>

char shiftChar(char c, int rshift) {
  char caps[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char lowercase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  if (cipherascii > 96 && cipherascii < 123) {
    int charindex = int(c) - 97;
    charindex += rshift;
    int encodedindex = charindex % 26;
    char encodedchar = lowercase[encodedindex];
    return encodedchar;
  }
  else if ((cipherascii > 64 && cipherascii < 91)) {
    int charindex = int(c) - 65;
    charindex += rshift;
    int encodedindex = charindex % 26;
    char encodedchar = caps[encodedindex];
    return encodedchar;
  }
  else {
    return c;
  }
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (int i = 0;i < plaintext.length();i++) {
    ciphertext += shiftChar(plaintext[i],rshift)
  }
  return ciphertext;
}
