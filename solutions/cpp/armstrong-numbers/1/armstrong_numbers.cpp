#include "armstrong_numbers.h"

namespace armstrong_numbers {

    bool is_armstrong_number(int num) {
        if (num == 0) {
            return true;
        }

        int original = num;
        int arm_sum = 0;
        int digit;
        int num_digits = 0;
 
        int copy = num;

        
        while (copy > 0) {
            num_digits += 1;

            copy = (int) floor(copy / 10);
        } 

        for (int i = 0; i < num_digits; i++) {
            digit = num % 10;

            arm_sum += (int) pow(digit, num_digits);

            num = (int) floor(num / 10);

        }


        return arm_sum == original;
    }

}  // namespace armstrong_numbers
