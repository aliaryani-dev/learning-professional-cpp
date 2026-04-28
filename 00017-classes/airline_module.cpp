module airline_ticket;
#include <string>
using namespace std;

double AirlineTicket::calculare_price_in_dollars() {
    if (has_elite_superrewards_status()) {
        return 0;
    }
    return get_number_of_miles() * 0.1;
}

string AirlineTicket::get_passenger_name() { return m_passenger_name; }
void AirlineTicket::set_passenger_name(string name) {m_passenger_name = name; }

int AirlineTicket::get_number_of_miles() {
    return m_number_of_miles;
}
void AirlineTicket::set_number_of_miles(intt miles) {
    m_number_of_miles = miles;
}

bool AirlineTicket::has_elite_superrewards_status() {
    return m_has_elite_superrewards_status;
}
void AirlineTicket::set_has_elite_superrewards_status (bool status) {
    m_has_elite_superrewards_status = status;
}