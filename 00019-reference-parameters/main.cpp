import <print>;
using namespace std;

void add_one (int i) {
    i++;
}

void add_one_II (int& i) {
    i++;
}

auto main() -> int {
    int a {50};
    println("a before calling add_one() : {}",a);
    add_one(a);
    println("a after calling add_one() : {}",a);
    add_one_II (a);
    println("a after calling add_one_II() : {}",a);
}