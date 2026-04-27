#include <array>
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

    // range-based for loop
    array arr {1,2,3,4,5,6,7,9,8};
    for (int k:arr) {
        println("array item {}",k);
    }

    // initialiser for range-based for loop 
    for (array arr2 {'a','b','c'}; char ch:arr2) {
        println("character in arr2 : {}", ch);
    }

    return 0;
}