#pragma once
#include <string>
using namespace std;

namespace atbash_cipher {

    string encode(string plaintext);
    
    string decode(string ciphertext);

}  // namespace atbash_cipher
