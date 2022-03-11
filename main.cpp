#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "= Caesar Encryption =" << std::endl;
  std::cout << "encryptCaesar('Way to Go!', 5): " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "encryptCaesar('A Light-Year Apart', 5): " << encryptCaesar("A Light-Year Apart", 5) << std::endl;
  std::cout << "encryptCaesar('Hello, World!', 10): " << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << "\n";
  std::cout << "= Vigenere Encryption =" << std::endl;
  std::cout << "encryptVigenere('Hello, World!','cake'): " << encryptVigenere("Hello, World!","cake") << std::endl;
  std::cout << "\n";
  std::cout << "= Caesar Decryption =" << std::endl;
  std::cout << "decryptCaesar('F Qnlmy-Djfw Fufwy', 5): " << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << std::endl;
  std::cout << "decryptCaesar('Bfd yt Lt!', 5): " << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << "decryptCaesar('Rovvy, Gybvn!', 10): " << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
  std::cout << "\n";
  std::cout << "= Vigenere Decryption =" << std::endl;
  std::cout << "decryptVigenere('Jevpq, Wyvnd!','cake'): " << decryptVigenere("Jevpq, Wyvnd!","cake") << std::endl;
  std::cout << "\n\n";
  return 0;
}
