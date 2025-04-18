#ifndef BOOKS_H
#define BOOKS_H

#include <string>
using namespace std;

class Books {
protected:
    string book_id;
    string book_name;
public:
    Books(string id, string book_name);
    virtual void display_bookinfo() = 0;
};

#endif
