#include <optional>
#include <print>
using namespace std;

optional<int> get_data (bool is_allowed) {
    if (is_allowed) {
        return 47;
    } else {
        return nullopt; // or just `return {};`
    }
}

auto main() -> int {
    optional<int> allowed_data {get_data(true)};
    if (allowed_data.has_value()){
        println("data when allowed : {}", allowed_data.value());
        // see also
        println("allowed value using dereference : {}",
        *allowed_data);
    } else {
        println("no value was allowed!");
    }

    optional<int> not_allowed_data {get_data(false)};
    //! This is going to return an exception
    // println("not allowed data : {}", not_allowed_data.value());
    println ("data or 0 if it's not allowed : {}"
        ,not_allowed_data.value_or(0));
    return 0;
}