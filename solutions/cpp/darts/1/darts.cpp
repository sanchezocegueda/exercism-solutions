#include "darts.h"
#include <cmath>

namespace darts {

    float RADIUS_INNER = 1.0;
    float RADIUS_MIDDLE = 5.0;
    float RADIUS_OUTER = 10.0;

    int score(float x, float y) {
        float distance_from_center = std::sqrt(x * x + y * y);

        if (distance_from_center <= RADIUS_INNER) {
            return 10;
        } else if (distance_from_center <= RADIUS_MIDDLE) {
            return 5;
        } else if (distance_from_center <= RADIUS_OUTER) {
            return 1;
        } else {
            return 0;
        }

    }

}  // namespace darts
