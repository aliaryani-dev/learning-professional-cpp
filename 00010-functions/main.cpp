#include <print>
using namespace std;

void my_function (int num, char c) {
    println ("number is : {}",num);
    println ("character is : {}",c);
}

int add_numbers (int a, int b) {
    println("Entering function {}", __func__);
    return a + b;
}
// add_numbers for double type : (this is called function overloading)
double add_numbers (double a, double b) {
    return a + b;
}

auto main() -> int {
    my_function(12, 'b');
    println("12 + 44 = {}",add_numbers(12,44));
    println("11.77 + 13.92 = {}",add_numbers(11.77,13.92));
    return 0;
}