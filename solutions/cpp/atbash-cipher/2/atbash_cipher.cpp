#include "atbash_cipher.h"

namespace atbash_cipher {
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string rev = "zyxwvutsrqponmlkjihgfedcba";

    string encode(string plaintext) {
        string cipher = "";
        int encoded = 0;

        for (char c : plaintext) {



            if (std::isalpha(static_cast<unsigned char>(c))) {
                if (encoded > 0 && encoded % 5 == 0) {
                    cipher += ' ';
                }
                c = tolower(static_cast<unsigned char>(c));
                cipher += rev[c - 'a'];
                encoded++;
            }
            else if (std::isdigit(static_cast<unsigned char>(c))) {
                if (encoded > 0 && encoded % 5 == 0) {
                    cipher += ' ';
                }
                encoded++;
                cipher += c;
            }
        }
        return cipher;
    }

    string decode(string ciphertext) {
        string plain = "";

        for (char c : ciphertext) {
            if (std::isalpha(static_cast<unsigned char>(c))) {
                plain += rev[c - 'a'];
            }
            else if (std::isdigit(static_cast<unsigned char>(c))) {
                plain += c;
            }
        }


        return plain;
    }
}  // namespace atbash_cipher
