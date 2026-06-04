#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message

    size_t idx = line.find(":");

    return line.substr(idx + 2);

}

std::string log_level(std::string line) {
    // return the log level

    size_t left = line.find("[");
    size_t right = line.find("]");
    return line.substr(left+1, right - left - 2);
}

std::string reformat(std::string line) {
    // return the reformatted message

    return message(line) + " (" + log_level(line) + ")";

}
}  // namespace log_line
