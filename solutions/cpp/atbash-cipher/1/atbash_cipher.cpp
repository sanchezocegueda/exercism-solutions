#include "atbash_cipher.h"

namespace atbash_cipher {
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string rev = "zxywvutsrqponmlkjihgfedcba";

    string encode(string plaintext) {
        string cipher = "";
        for (size_t i = 0; i < plaintext.size(); i++) {
            
            if (plaintext[i] == ' ') { 
                continue; 
            }

            int code = plaintext[i] - 'a';
            cipher += rev[code];

            if (i % 5 == 0 && i > 0) {
                cipher += " ";
            }

        }
        return cipher;
    }

    string decode(string ciphertext) {
        string plain = "";

        for (size_t j = 0; j < ciphertext.size(); j++) {
            if (plain[j] == ' ') {
                continue;
            }
            int code = plain[j] - 'a';
            plain += alph[code];
             
        }

        return plain;
    }
}  // namespace atbash_cipher
