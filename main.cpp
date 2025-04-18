#include <iostream>
#include <vector>
#include "LibrarySystem.h"

using namespace std;

int main() {
    vector<Library_System*> obj;
    string choice;

    do {
        cout << "\n========== Library Menu ==========\n";
        cout << "1. Issue Book\n";
        cout << "2. Return Book\n";
        cout << "3. Show All Issued Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != "1" && choice != "2" && choice != "3" && choice != "4") {
            cout << "Invalid input type. Please enter a valid number.\n";
            continue;
        }

        if (choice == "1") {
            string sid, bid, sname, bname;
            cin.ignore();

            cout << "Enter Student ID: ";
            getline(cin, sid);
            cout << "Enter Student Name: ";
            getline(cin, sname);
            cout << "Enter Book ID: ";
            getline(cin, bid);
            cout << "Enter Book Name: ";
            getline(cin, bname);

            Library_System* record = new Library_System(sid, bid, sname, bname);
            obj.push_back(record);

            cout << "\nBook issued successfully!\n";
            cout << "Your Details:\n";
            cout << "Student Id : " << sid << endl;
            cout << "Book Id : " << bid << endl;
        }

        else if (choice == "2") {
            if (obj.empty()) {
                cout << "No books are currently issued.\n";
            } else {
                string search_id;
                cout << "Enter Book ID to return: ";
                cin >> search_id;
                bool found = false;

                for (int i = 0; i < obj.size(); ++i) {
                    if (obj[i]->get_bookid() == search_id) {
                        delete obj[i];
                        obj.erase(obj.begin() + i);
                        cout << "Book returned successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Book ID not found!\n";
                }
            }
        }

        else if (choice == "3") {
            if (obj.empty()) {
                cout << "No books currently issued.\n";
            } else {
                for (auto& record : obj) {
                    cout << "-------------------------\n";
                    record->display_all();
                    cout << "-------------------------\n";
                }
            }
        }

        else if (choice == "4") {
            for (auto& record : obj) {
                delete record;
            }
            obj.clear();
            cout << "Exiting Library System. Goodbye!\n";
        }

    } while (choice != "4");

    return 0;
}
