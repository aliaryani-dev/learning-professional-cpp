module employee;
import <string>;
using namespace std;

namespace Records {
    Employee::Employee (const string& first_name, const string& last_name)
        : m_first_name {first_name}, m_last_name {last_name} {}
    
    void Employee::promote (int raise_amount) {
        set_salary (get_salary() + raise_amount);
    }
}