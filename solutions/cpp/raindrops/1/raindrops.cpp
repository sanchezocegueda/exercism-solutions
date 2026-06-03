#include "raindrops.h"

namespace raindrops {

    std::string convert (int num) {
        std::string res = "";
        if (num % 3 == 0) {
            res = res + "Pling";
        }
        if (num % 5 == 0) {
            res = res + "Plang";
        } 
        if (num % 7 == 0) {
            res = res + "Plong";
        }
        return (res.size() > 0) ? res : std::to_string(num);
    }

}  // namespace raindrops
