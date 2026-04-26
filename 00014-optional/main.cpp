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
    } else {
        println("no value was allowed!");
    }
    return 0;
}