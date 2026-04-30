import database;
import employee;
import <print>;
import <iostream>;
import <stdexcept>;

using namespace std;
using namespace Records;

int display_menu();
void do_hire (Database& db);
void do_fire (Database& db);
void do_promote (Database& db);

auto main() -> int {
    Database employee_db;
    bool done {false};
    while (!done) {
        int selection {display_menu()};
        switch (selection) {
            case 0: {
                done = true;
            } break;
            case 1: {
                do_hire (employee_db);
            } break;
            case 2: {
                do_fire (employee_db);
            } break;
            case 3: {
                do_promote (employee_db);
            } break;
            case 4: {
                employee_db.display_all();
            } break;
            case 5: {
                employee_db.display_current();
            } break;
            case 6: {
                employee_db.display_former();
            } break;
            default: {
                println(cerr,"unknown command");
            } break;
        }
    }
}

int display_menu() {
    int selection;
    println("");
    println("Employee Database");
    println("------------------------------");
    println("1) Hire a new employee");
    println("2) fire an employee");
    println("3) promote an employee");
    println("4) List all employees");
    println("5) List all current employees");
    println("6) List all former employees");
    println("");
    print("-----> ");
    cin >> selection;
    return selection;
}

void do_hire(Database& db) {
    string first_name;
    string last_name;
    print("First name? --> ");
    cin >> first_name;
    print("Last name? --> ");
    cin >> last_name;

    auto& employee {db.add_employee (first_name, last_name)};
    println("Hired employee : {}, {} with employee number : {}",
            last_name, first_name, employee.get_employee_number());
}

void do_fire(Database& db) {
    int employee_number;
    print ("Employee number? --> ");
    cin >> employee_number;

    try {
        auto& emp { db.get_employee(employee_number)};
        emp.fire();
        println("Employee {} terminated.", employee_number);
    } catch (const logic_error& exception) {
        println(cerr, "Unable to terminate employee : {}",
                exception.what());
    }
}

void do_promote(Database& db) {
    int employee_number;
    print ("Employee number? --> ");
    cin >> employee_number;
    int raise_amount;
    print ("How much of a raise? --> ");
    cin >> raise_amount;

    try {
        auto& emp {db.get_employee(employee_number)};
        emp.promote (raise_amount);
    } catch (const logic_error& exception) {
        println(cerr, "Unable to promote : {}",exception.what());
    }
}