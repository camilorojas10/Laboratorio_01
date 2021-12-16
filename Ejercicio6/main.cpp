#include <iostream>

using namespace std;
int A;
int B;
int i;
int R;
int C;
int main()

{
    C=1;
    R=1;
    cout << "Ingrese el numero A" << endl;
    cin>>A;

    cout<<"Ingrese el numero B"<<endl;
    cin>>B;

    if(B>0){
    for(i=1;i<=B;i++){
        R=A;
        C=R*C;

    }
    cout<<C<<endl;
     }
    else{
        cout<<"El programa no funciona con potencias negativas"<<endl;
    }

    return 0;

}
