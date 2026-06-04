#include "trinary.h"
#include <cctype>
using namespace std;

namespace trinary {

    int to_decimal(std::string num) {
        int pow_3 = 1;
        int cur;
        int res = 0;
        size_t n = num.size();
        for (size_t i = 0; i < n; i++) {
            
            if (isdigit(num[n-i-1])) {
                cur = static_cast<int>(num[n-i-1] - '0');
            
                res += cur * pow_3;
                pow_3 *= 3;

            }
        }
        return res;
    }

}  // namespace trinary
