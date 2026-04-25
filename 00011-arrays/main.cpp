#include <array>
#include <print>
using namespace std;

auto main() -> int {
    // c-style array
    int arr_int [3] {3,2,1};
    println("size of arr_int : {}",size(arr_int));

    // cpp-style array
    array<int, 3> arr {1,2,3};
    println("size of arr : {}",arr.size());

    // see also 
    array arr2 {9,8,7};
    println("size of arr2 : {}",arr2.size());
}