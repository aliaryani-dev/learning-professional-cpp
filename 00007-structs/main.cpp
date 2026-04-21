#include <print>
import employee;
using namespace std;

int main() {
    Employee an_employee;
    an_employee.first_initial = 'J';
    an_employee.last_initial = 'D';
    an_employee.employee_number = 42;
    an_employee.salary = 8000;
    println("Employee : {}{}",an_employee.first_initial,an_employee.last_initial);
    println("Number : {}",an_employee.employee_number);
    println("Salary : {}", an_employee.salary);
    return 0;
}