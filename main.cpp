#include "ContactList.h"
using namespace std;
int main()
{
  ContactList* cl1 = new ContactList();
  string name;
  int ch = 0;
  int length = 0;
  do{
  cout << "1.INSERT" << endl;
  cout << "2.APPEND" << endl;
  cout << "3.SORTED INSERT" << endl;
  cout << "4.DISPLAY" << endl;
  cout << "5.DELETE" << endl;
  cout << "6.SIZE" << endl;
  cout << "7.EXIT"<< endl;
  cin >> ch;
  char con;
 switch(ch){
  case 1: 
        while(true)
          {
            cout << "INSERT a Name: " <<endl;
            cin >> name;
            cl1->insert(name);
            cout << "Continue? Y/y or N/n" << endl;
            cin >> con;
            if(con == 'n' || con == 'N')
            break;
          }
          break;

  case 2: 
        while(true)
        {
          cout << "APPEND a Name: " <<endl;
          cin >> name;
          cl1->append(name);
          cout << "Continue? Y/y or N/n" << endl;
          cin >> con;
          if(con == 'n' || con == 'N')
          break;
        }
        break;
  case 3: 
        while(true)
        {
          cout << "SORTED INSERT a Name: " <<endl;
          cin >> name;
          cl1->sorted(name);
          cout << "Continue? Y/y or N/n" << endl;
          cin >> con;
          if(con == 'n' || con == 'N')
          break;
        }
        break;
  case 4: 
          cout << "LIST : " << endl;
          cl1 -> printList();
          break;
  case 5: 
          cout << "Delete a Name: " <<endl;
          cin >> name;
          cl1->remove(name);
          break;
  case 6:  length = cl1 ->size;
  cout <<"Size : " << length <<endl;
  break;
  default: break;
    }//switch end
  }while(ch!=7);
  
 
}