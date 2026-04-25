#include <print>
using namespace std;

void my_function (int num, char c) {
    println ("number is : {}",num);
    println ("character is : {}",c);
}

int add_numbers (int a, int b) {
    return a + b;
}

auto main() -> int {
    my_function(12, 'b');
    println("12 + 44 = {}",add_numbers(12,44));
    return 0;
}