#include "rotational_cipher.h"


namespace rotational_cipher {
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string rotate(string plaintext, int key) {
        string cipher = "";
        int index;
        for (char c : plaintext) {
            if (islower(static_cast<unsigned char>(c))) {
                index = (c - 'a' + key) % 26; 
                cipher += alph[index];
            } else if (isupper(static_cast<unsigned char>(c))) {
                index = (c - 'A' + key) % 26;
                cipher += ALPH[index];
            } else {
                cipher += c;
            } 
        }
        return cipher;
    }
    

}  // namespace rotational_cipher
