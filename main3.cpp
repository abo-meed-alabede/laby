#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter any number :";
 cin>>n;
 int e;
 int array[n] ;
  for(int i=0;i<n;i++){
      cin >>array[i];
      
  }
       for(int i=0;i<n;i++){
       cout<<"\t"<<array[i]<<endl;
  }

    return 0;
}