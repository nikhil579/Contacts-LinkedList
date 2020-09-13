#ifndef CONTACTLIST_H_
#define CONTACTLIST_H_
#include "Contact.h"
//This is LinkedList class which implements operations like CRUD.
class ContactList
{
private:
  Contact* head;
  

public:
  int size;
  ContactList();
  void insert(const std::string&);
  void append(const std::string&);
  void sorted(const std::string&);
  void remove(const std::string&);
  void printList();

};
#endif