
#include <print>
using namespace std;

auto main() -> int {
    int uninitialised_var;
    int initialised_var {3};
    println("{} is an uninitialised variable.",uninitialised_var);
    println("{} is an initialised variable.", initialised_var);

    return 0;
}
