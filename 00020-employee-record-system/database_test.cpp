import database;
import <print>;

using namespace std;
using namespace Records;

auto main() -> int {
    Database my_db;
    Employee& emp1 {my_db.add_employee ("Greg", "Wallis")};
    emp1.fire();

    Employee& emp2 {my_db.add_employee ("Marc", "White")};
    emp2.set_salary (100'000);
    
    Employee& emp3 {my_db.add_employee ("John", "Doe")};
    emp3.set_salary (100'000);
    emp3.promote();

    println("All Employees:");
    my_db.display_all();
    println("Current Employees:");
    my_db.display_current();
    println("Former Employees:");
    my_db.display_former();
}