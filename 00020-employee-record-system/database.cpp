module database;
import <string>;

namespace Records {
    Employee& Database::add_employee (const std::string& first_name,
                                    const std::string& last_name){
        Employee the_employee {first_name, last_name};
        the_employee.set_employee_number (m_next_employee_number++);
        the_employee.hire();
        m_employees.push_back(the_employee);
        return m_employees.back();
    }
    
    Employee& Database::get_employee (int employee_number) {
        for (auto& employee : m_employees) {
            if (employee.get_employee_number() == employee_number) {
                return employee;
            }
        }
        throw logic_error { "No employees found!"};
    }
    Employee& Database::get_employee (const std::string& first_name,
                                    const std::string& last_name) {
        for (auto& employee : m_employees) {
            if (employee.get_first_name() == first_name
            && employee.get_last_name() == last_name) {
                return employee;
            }
        }
        throw logic_error { "No employees found!"};
    }
}