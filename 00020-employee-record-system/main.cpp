import database;
import employee;
import <print>;
import <iostream>;

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
    println("------------------------------")
    println("1) Hire a new employee");
    println("2) fire an employee");
    println("3) promote an employee");
    println("4) List all employees");
    println("5) List all current employees");
    println("6) List all former employees");
    println("");
    println("-----> ");
    cin >> selection;
    return selection;
}