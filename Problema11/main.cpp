#include <iostream>

using namespace std;

int N,i,Numeprimo,cont,suma;
int main()
{
 cont=0;
suma=0;
cout<<"Digite el numero: "<<endl; cin>>N;
for(Numeprimo=2;Numeprimo<=N;Numeprimo=Numeprimo+1){
    for(i=1;i<=Numeprimo;i++){
        if(Numeprimo%i==0){
            cont++;
        }
    }
        if(cont<3){
            suma+=Numeprimo;
        }
        cont=0;

}
cout<<"El resultado de la suma es: "<<suma<<endl;
}
