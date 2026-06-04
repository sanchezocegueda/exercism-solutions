#include "reverse_string.h"

namespace reverse_string {


    std::string reverse_string(std::string str) {
        // new solution using more idiomatic approach
        std::reverse(str.begin(), str.end());

        return str;
    }

}  // namespace reverse_string
