#include "LibrarySystem.h"

Library_System::Library_System(string sid, string bid, string sname, string bname)
    : Library(sid, sname), Books(bid, bname) {}

void Library_System::display_info() {
    cout << "Student ID: " << id << endl;
    cout << "Student Name: " << sname << endl;
}

void Library_System::display_bookinfo() {
    cout << "Book ID: " << book_id << endl;
    cout << "Book Name: " << book_name << endl;
}

void Library_System::display_all() {
    display_info();
    display_bookinfo();
}

string Library_System::get_bookid() {
    return book_id;
}
