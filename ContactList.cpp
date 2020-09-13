#include "ContactList.h"
using namespace std;

ContactList::ContactList():head(0),size(0)
{
}

void ContactList::insert(const string& name)
{
  Contact* newNode = new Contact(name);
  if(head == 0)
  {
    head = newNode;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
  size++;
}
 void ContactList::append(const string& name)
 {
    Contact* newNode = new Contact(name);
    
    if(head == 0)
      {
        head = newNode;
      }
    else
    {
      Contact* ptr = head;
      while(ptr -> next != 0)
      {
        ptr = ptr -> next;
      }
      ptr->next = newNode;
    }
    size++;
 }

void ContactList::sorted(const string& name){
  Contact* newNode = new Contact(name);
  //case 1 - for empty list
  if(head == 0){
    head = newNode;
  }
  else{
    Contact* curr = head;
    Contact* prev = 0;
  //traverse the list to find insert location
    while(curr != 0){
      if(curr -> name >= newNode -> name)
        break;
      else{
        prev = curr;
        curr = curr -> next;
      }
  }
    //case 2 - insert at head
    if(curr == head){
      newNode -> next = head;
      head = newNode;
    }
    //case 3 - insert after head
    else{
      newNode -> next = curr;
      prev -> next = newNode;
    }
  }//end else
  size++;
}

void ContactList::remove(const string& name){
  //case 1 empty list
  if(head == 0){
    cout << "Name cannot be deleted. Empty list"<<endl;
  }
  else{
    Contact* curr = head;
    Contact* prev = 0;
  //traverse list to find a node to delete
  while(curr != 0)
  {
    if(curr -> name == name)
      break;
    else
      {
        prev = curr;
        curr = curr -> next;
      }
  }
    //case 2 no match found in the list
    if (curr == 0)
      cout << "Name not found " << endl;
    else
    {
      //case 3 delete from head
      if (curr == head){
        head = head -> next;
        
      }
      //case 4 delete after head
      else{
        prev->next = curr->next;
       
    }
     delete curr;
     size--;
    }
  }
}

void ContactList::printList()
{
  Contact* ptr = head;
  while(ptr !=  0)
  {
    cout << *ptr << " => ";
    ptr = ptr -> next;
  }
   cout << endl;
}
