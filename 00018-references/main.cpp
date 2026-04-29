import <print>;
using namespace std;

auto main() -> int {
    int x {5};
    int& x_ref {x}; // ref variables must always be initialised
    println("x before y : {}",x);

    int y {4};
    x_ref = y; // changes the value of x to 4, does not change the ref
    println("x after y : {}",x);

    // ref to const
    int z {3};
    const int& z_ref {z};
    // z_ref = 4; //! error
}