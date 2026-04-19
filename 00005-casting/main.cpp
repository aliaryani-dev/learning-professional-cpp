#include <print>
using namespace std;

int main() {
    float my_float { 3.1415f };
    int i1 { (int)my_float }; // most unwelcome
    int i2 { int(my_float) };
    int i3 { static_cast<int>(my_float) }; // verbose yet safest
    println("my float : {}\ni1 : {}\ni2 : {}\ni3 : {}",my_float,i1,i2,i3);
    // these ways were explicit, but we can also do it implicitly
    short int my_short { 5 };
    println("size of my short : {}", sizeof(my_short));
    long int long_short {my_short};
    println("size of long short : {}", sizeof(long_short));

    return 0;
}
