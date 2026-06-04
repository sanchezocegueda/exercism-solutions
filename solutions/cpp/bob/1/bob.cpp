#include "bob.h"

namespace bob {
    string sure = "Sure.";
    string chill = "Whoa, chill out!";
    string calm_down = "Calm down, I know what I'm doing!";
    string fine = "Fine. Be that way!";
    string whatever = "Whatever.";

    string hey(string sentence) {
        int num_letters = 0;
        bool all_caps = true;
        int n = (int) sentence.size();
        char last_char = ' ';
        bool all_whitespace = true;
        char c;
        for (int i = 0; i < n; i++) {
            c = sentence[i];
            if (isalpha(c)) {
                num_letters += 1;
                if (!isupper(c)) {
                    all_caps = false;
                }
            }

            if (!isspace(c)) {
                all_whitespace = false;
                last_char = c;
            }
        }

        bool question = last_char == '?';

        if (all_whitespace) {
            return fine;
        } else if (num_letters > 0 && all_caps) {
            if (question) {
                return calm_down;
            } else {
                return chill;
            }
        } else if (question) {
            return sure;
        } else {
            return whatever;
        }

    }

}  // namespace bob
