#include <initializer_list>
using namespace std;

int sum (initializer_list<int> values) {
    int total {0};
    for (int value: values) {
        total += value;
    }
    return total;
}

auto main() -> int {

}