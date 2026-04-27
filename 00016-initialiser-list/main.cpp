#include <initializer_list>
#include <print>
using namespace std;

int sum (initializer_list<int> values) {
    int total {0};
    for (int value: values) {
        total += value;
    }
    return total;
}

auto main() -> int {
    int a {sum({10,20,30,40,50,60,70,80,90})};
    println("a : {}",a);
    return 0;
}