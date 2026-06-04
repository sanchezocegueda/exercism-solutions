#include "reverse_string.h"

namespace reverse_string {


    std::string reverse_string(std::string str) {
        std::string new_str;        
        for (size_t i = 0; i < str.size(); i++) {
            new_str = str[i] + new_str;
        }

        return new_str;
    }

}  // namespace reverse_string
