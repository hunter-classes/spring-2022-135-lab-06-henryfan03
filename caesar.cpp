#include <iostream>
#include <string>

char shiftChar(char c, int rshift) {
  char caps[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char lowercase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  if (int(c) > 96 && int(c) < 123) {
    int charindex = int(c) - 97;
    charindex += rshift;
    if (charindex < 0) {
      return lowercase[26 + charindex];
    }
    else {
      int encodedindex = charindex % 26;
      char encodedchar = lowercase[encodedindex];
      return encodedchar;
    }
  }
  else if (int(c) > 64 && int(c) < 91) {
    int charindex = int(c) - 65;
    charindex += rshift;
    if (charindex < 0) {
      return caps[26 + charindex];
    }
    else {
      int encodedindex = charindex % 26;
      char encodedchar = caps[encodedindex];
      return encodedchar;
    }
  }
  else {
    return c;
    }
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (int i = 0;i < plaintext.length();i++) {
    ciphertext += shiftChar(plaintext[i],rshift);
  }
  return ciphertext;
}
