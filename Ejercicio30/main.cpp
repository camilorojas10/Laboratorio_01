#include <iostream>
#include <cstdlib>
#include<time.h>

using namespace std;
int numero_aleatorio,B,i,A;
bool bandera=false;
int main()
{

    srand(time(NULL));
    numero_aleatorio=1+rand()%100;
    numero_aleatorio=A;
    while(bandera==false){

        cout<<"ingrese un numero"<<endl;cin>>B;

        if(B<A){
           cout<<"El numero ingresado es menor que el numero aleatorio"<<endl;
           i++;
           }
        else if(B>A){
            cout<<"El numero ingresado es mayor que el numero aleatorio"<<endl;
            i++;
        }

        else if(B==A){
            i++;
            cout<<"¡Felicidades adivinaste!,el numero era:"<<A<<endl;
            cout<<"El numero de intentos fueron:"<<i<<endl;
            bandera=true;
        }

    }

    return 0;

}
