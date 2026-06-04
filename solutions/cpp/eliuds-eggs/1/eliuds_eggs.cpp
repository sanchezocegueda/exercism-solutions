#include "eliuds_eggs.h"

namespace chicken_coop {

    uint32_t positions_to_quantity(uint32_t num) {
        uint32_t hamming_weight = 0;
        for (auto i = 0; i < 32; i++) {
            if ((1 << i & num) != 0) {
                hamming_weight++;
            }
        }
        return hamming_weight;
    }


}  // namespace chicken_coop
