#include <iostream>

using namespace std;

int N,MinimoComun,k,k2,bandera;
int main()
{
    cout<<"ingrese un numero: "<<endl; cin>>N;
k=N;
k2=N-1;
bandera=1;
MinimoComun=N*k2;
while(bandera==1){
    for (k=N;k>=1;k--){
        if(MinimoComun%k!=0){
            MinimoComun=N*(N+k2);
            k2++;
            break;
        }
        if(k==1){
            cout<<"El minimo comun multiplo es: "<<MinimoComun<<endl;
            bandera=0;
        }
    }
}
}
