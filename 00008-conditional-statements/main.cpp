#include <print>
using namespace std;
int main() {
    // if else statements
    if (int i {8}; i > 5) {
        println("i is bigger than 5");
    } else if (i == 5) {
        println("i is equal to 5");
    } else {
        println("i is lower than 5");
    }

    // switch statements
    enum class Mode {Default, Custom, Standard};
    Mode mode {Mode::Standard};
    int value {};
    switch (mode) {
        using enum Mode;
        case Default: 
            value = 20;
            break;
        case Custom:
            value = 44;
            break;
        case Standard:
            value = 25;
            break;
    } println("value : {}",value);

    return 0;
}
