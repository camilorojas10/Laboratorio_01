#include <iostream>

using namespace std;
int N,i,cont,m=1;

int main()
{
    cout << "Ingrese un numero" << endl;
    cin>>N;

    if(N>1){
    for(i=1;i<=5;i++){
        m=m*N;
        cout<<m<<endl;
    }

    }
    else{
        cout<<"el programa funciona con numeros positivos"<<endl;
    }




    return 0;
}
