export module employee;

import <string>;
using namespace std;
namespace Records {
    const int _default_starting_salary {30'000};
    export const int _default_raise_and_demerit_amount {1'000};

    export class Employee {
        public:
            Employee (const string& first_name,
                const string& last_name);
            void promote (int raise_amount = _default_raise_and_demerit_amount);
            void demote (int demerit_amount = _default_raise_and_demerit_amount);
            void hire (); // hires or rehires an employee
            void fire (); // dismisses the employee
            void display() const; // prints employee info to console

            // getters and setters
            void set_first_name (const string& first_name);
            const string& get_first_name () const;

            void set_last_name (const string& last_name);
            const string& get_last_name () const;

            void set_employee_number (int employee_number);
            int get_employee_number () const;

            void set_salary (int new_salary);
            int get_salary () const;

            bool is_hired () const;
        
        private:
                string m_first_name;
                string m_last_name;
                int m_employee_number {-1};
                int m_salary {_default_starting_salary};
                bool m_hired {false};
    };
}