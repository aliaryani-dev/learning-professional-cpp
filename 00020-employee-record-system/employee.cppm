export module employee;

import <string>;
using namespace std;
namespace Records {
    const int _default_starting_salary {30'000};
    export const int _default_raise_and_demerit_amount {1'000};
}

export class Employee {
    public:
        Employee (const string& first_name,
            const string& last_name);
        void promote (int raise_amount = _default_raise_and_demerit_amount);
        void demote (int demerit_amount = _default_raise_and_demerit_amount);
        void hire (); // hires or rehires an employee
        void fire (); // dismisses the employee
}