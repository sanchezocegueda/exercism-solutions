#include "luhn.h"

namespace luhn {

    bool valid(string number) {


        int digit;
        int dub = 0;
        int sum = 0;
        int num_digits = 0;

        for (int i = (int)number.size() - 1; i >= 0; i--) {
            if (isdigit(number[i])) {
                num_digits++;
                digit = number[i] - '0';
                if (dub == 1) {
                    digit *= 2;
                    if (digit > 9) {
                        digit -= 9;
                    }
                    
                }
                sum += digit;
                dub = 1 - dub;
            } else if (number [i] != ' ') {
                return false; // invalid character
            }


        }
        return num_digits > 1 && sum % 10 == 0;
    }

}  // namespace luhn
