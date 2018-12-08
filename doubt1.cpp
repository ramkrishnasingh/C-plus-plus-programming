// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr,rks;
  rks = "Hello world i can do it ";
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
//   stringstream(mystr) << "HelloWorld"; this is not working why ??
// how to send complete strings with whitespace in stringstream
    stringstream oo;
    oo << rks;
    while(oo >> mystr) // how this oo object works here in stringstream
  cout<<mystr;
  return 0;
 } 



 // goto loop example
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    
    string mystr,ex;
    int number = 99;
    getline(cin,mystr);
    stringstream obj ;
    obj << mystr;
    obj >> number;
    cout << number << endl;
    while (obj >> ex)
    cout<<ex<<endl;
    // so here we can say that it is going to take all 
  //strings in there and break with whitespace character and 
  // with numbers around there 
    
}