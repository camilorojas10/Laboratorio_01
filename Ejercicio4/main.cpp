#include <iostream>

using namespace std;
int A;
int B;
int main()
{
    cout << "Ingrese el numero A"<<endl;
            cin>>A;
      cout << "Ingrese el numero B"<<endl;
           cin>>B;

       if(A>B){
           cout<<"El menor es "<<B<<endl;
       }
       else{
           cout<<"El menor es "<<A<<endl;
       }
    return 0;
}
