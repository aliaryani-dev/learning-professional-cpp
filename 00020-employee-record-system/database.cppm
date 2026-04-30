export module database;
import <string>;
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
    }
}