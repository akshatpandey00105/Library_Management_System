#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
using namespace std;

class Library {
protected:
    string id;
    string sname;
public:
    Library(string id, string sname);
    virtual void display_info() = 0;
};

#endif
