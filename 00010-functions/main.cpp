#include <print>
using namespace std;

void my_function (int num, char c) {
    println ("number is : {}",num);
    println ("character is : {}",c);
}

auto main() -> int {
    my_function(12, 'b');
    return 0;
}