#include <print>
#include <vector>
using namespace std;

auto main() -> int {
    vector<int> my_vector {3,5,7};
    my_vector.push_back(11);
    my_vector.push_back(13);
    println("my_vector 3rd item is : {}",my_vector[3]);

    // see also 
    vector vec2 {2,4,6};
}