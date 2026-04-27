#include <print>
using namespace std;

auto main() -> int {
    // `while` loop
    int i {5};
    while (i<11) {
        println("i : {}", i);
        ++i;
    }

    // `do/while` loop
    do {
        println("i : {}",i);
        --i;
    } while (i>0);

    return 0;
}