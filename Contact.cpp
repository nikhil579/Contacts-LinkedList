#include "Contact.h"
using namespace std;

Contact::Contact(string n):name(n), next(NULL)
{

}
ostream& operator << (ostream& os, const Contact& c)
{
  return os << c.name << " ";
}