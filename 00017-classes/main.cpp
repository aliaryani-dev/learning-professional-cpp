import airline_ticket;
import <print>;
using namespace std;
auto main() -> int {
    AirlineTicket my_ticket;
    my_ticket.set_passenger_name ("John Doe");
    my_ticket.set_number_of_miles (700);
    double cost {my_ticket.calculate_price_in_dollars()};
    println("my ticket will cost {} Dollars", cost);
    return 0;
}