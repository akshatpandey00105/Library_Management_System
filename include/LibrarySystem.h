#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include "Library.h"
#include "Books.h"
#include <iostream>
using namespace std;

class Library_System : public Library, public Books {
public:
    Library_System(string sid, string bid, string sname, string bname);

    void display_info() override;
    void display_bookinfo() override;
    void display_all();
    string get_bookid();
};

#endif
