module employee;
import <string>;
import <print>;
using namespace std;

namespace Records {
    Employee::Employee (const string& first_name, const string& last_name)
        : m_first_name {first_name}, m_last_name {last_name} {}
    
    void Employee::promote (int raise_amount) {
        set_salary (get_salary() + raise_amount);
    }
    void Employee::demote (int demerit_amount) {
        set_salary (get_salary - demerit_amount);
    }

    void Employee::hire() {m_hired = true;}
    void Employee::fire() {m_hired = false;}

    void Employee::display() const {
        println("Employee : {}, {}", get_last_name(),get_first_name());
        println("-----------------------------------");
        println("{}", (is_hired() ? "Current Employee" : "Former Employee"));
        println("Employee number : {}", get_employee_number());
        println("Salary : ${}", get_salary());
        println("");
    }

    // getters and setters
    void Employee::set_first_name (const string& first_name) {
        m_first_name = first_name;
    }
    const string& Employee::get_first_name () const {
        return m_first_name;
    }

    void Employee::set_last_name (const string& last_name) {
        m_last_name = last_name;
    }
    const string& Employee::get_last_name () const {
        return m_last_name;
    }

    void Employee::set_employee_number (int employee_number) {
        m_employee_number = employee_number;
    }
    int Employee::get_employee_number () const {
        return m_employee_number;
    }


}