#include <iostream>
using namespace std;
int main() {
  int *p;
  p= new int;
 *p=6;
         
        cout<<p<<endl;
        cout<<*p<<endl;

  delete p;

    return 0;
}
