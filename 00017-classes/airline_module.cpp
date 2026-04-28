module airline_ticket;
import <string>;
using namespace std;

AirlineTicket::AirlineTicket() {};
AirlineTicket::~AirlineTicket() {};
double AirlineTicket::calculate_price_in_dollars() {
    if (has_elite_superreward_status()) {
        return 0;
    }
    return get_number_of_miles() * 0.1;
}

string AirlineTicket::get_passenger_name() { return m_passenger_name; }
void AirlineTicket::set_passenger_name(string name) {m_passenger_name = name; }

int AirlineTicket::get_number_of_miles() {
    return m_number_of_miles;
}
void AirlineTicket::set_number_of_miles(int miles) {
    m_number_of_miles = miles;
}

bool AirlineTicket::has_elite_superreward_status() {
    return m_has_elite_superreward_status;
}
void AirlineTicket::set_has_elite_superreward_status (bool status) {
    m_has_elite_superreward_status = status;
}