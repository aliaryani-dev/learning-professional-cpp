import <print>;
using namespace std;

void add_one (int i) {
    i++;
}

auto main() -> int {
    int a {50};
    println("a before calling add_one() : {}",a);
    add_one(a);
    println("a after calling add_one() : {}",a);
}