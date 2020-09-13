#ifndef CONTACT_H_
#define CONTACT_H_
//This is the Node class which contains string name and next pointer
#include <iostream>
#include <string>

class Contact{
private:
    std::string name;
    Contact* next;
    friend std::ostream& operator << (std::ostream& os, const Contact& c);
    friend class ContactList;

public:
    Contact(std::string name="none"); //parameterized constructor

};
#endif