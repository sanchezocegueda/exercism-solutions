#include "hexadecimal.h"

namespace hexadecimal {

    int convert(string num) {

        int pow_16 = 1;
        char cur;
        int code;
        int val;
        int sum = 0;
        for (int i = (int) num.size()-1; i >= 0; i--) {
            cur = num[i];
            if (isdigit(cur)) {
                val = cur - '0';
            } else if (isalpha(cur)) {
                code = cur - 'a';
                if (code < 0 || code > 5) {
                    return 0; // invalid
                }
                val = code + 10;

            }
            sum += val * pow_16;
            pow_16 *= 16;
            
        }

        return sum;

    }

}  // namespace hexadecimal
