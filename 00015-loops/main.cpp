#include <print>
using namespace std;

auto main() -> int {
    // `while` loop
    int i {5};
    while (i<11) {
        println("i : {}", i);
        ++i;
    }

    return 0;
}