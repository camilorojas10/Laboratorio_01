#include <iostream>

using namespace std;
int N;
int i;
int cont;
int m;
int p;
int main()
{
    cout << "Ingrese un numero N" << endl;
    cin>>N;
    m=1;
    p=1;
    if(N<100&&N>0){
        for(i=1;i<100;i++){
          cont=i;
          m=N*i;
          p=m;

        if(p<100){
            cout<<p<<endl;
        }

     }
     }
    else{
        cout<<"El numero ingresado es superior a 100"<<endl;
    }

 return 0;
}




