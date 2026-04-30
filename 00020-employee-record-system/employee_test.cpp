import employee;
import <print>;

using namespace std;
using namespace Records;

auto main() -> int {
    println("Testing the employee class :");
    Employee emp {"John", "Doe"};
    emp.set_first_name ("Jane");
    emp.set_last_name ("Smith");
    emp.set_employee_number (72);
    emp.set_salary (50'000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();
}