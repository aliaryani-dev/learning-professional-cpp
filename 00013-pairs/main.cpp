#include <print>
#include <utility>
using namespace std;

auto main() -> int {
    pair<double, int> my_pair {11.32, 12};
    println("first item is {} and the second one is {}",
        my_pair.first,my_pair.second);
}