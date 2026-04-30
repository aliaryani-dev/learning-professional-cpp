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
}