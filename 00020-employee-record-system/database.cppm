export module database;
import <string>;
import <vector>;
import employee;

namespace Records {
    const int _first_employee_number {1'000};

    export class Database {
        public:
            Employee& add_employee (const std::string& first_name,
                                    const std::string& last_name);
            Employee& get_employee (int employee_number);
            Employee& get_employee (const std::string& first_name,
                                    const std::string& last_name);
            
            void display_all() const;
            void display_current() const;
            void display_former() const;\

        private:
            std::vector<Employee> m_employees;
            int m_next_employee_number {_first_employee_number};
    };
}