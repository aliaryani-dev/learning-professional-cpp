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

    // `for` loop
    for (int j {0};j < 5;++j) {
        println("j : {}",j);
    }

    return 0;
}