#include <iostream>
#include <cmath>
using namespace std;

void function( double  *_cosin, double *_sin, double angle)
{
    *_sin = sin(angle);
    cout << *_sin<<endl;
    *_cosin = cos(angle);
      cout << *_cosin<<endl;
}


int main() {
    double _cosin;
    double _sin;
    double angle;
    cout <<" Enter angle :"<<endl;
    cin>>angle;
    function(&_cosin,&_sin , angle);
    
    return 0;
}