export module airline_ticket;
#include <string>

using namespace std;

export class AirlineTicket {
    public:
        AirlineTicket();
        ~AirlineTicket();

        double calculate_price_in_dollars();

        string get_passenger_name();
        void set_passenger_name(string name);

        int get_number_of_miles();
        void set_number_of_miles(int miles);

        bool has_elite_superreward_status();
        void set_elite_superreward_status(bool status);
    private:
        string m_passenger_name {"Unknown Passenger"};
        int m_number_of_miles {0};
        bool m_has_elite_superreward_status {false};
};

