#include <iostream>

using namespace std;

int k,suma,mod,N;
int main()
{
k=1;
suma=0;
cout<<"ingrese un numero entero N: "<<endl; cin>>N;
while(10<N) {
    mod=N%10;
    N/=10;

    if (mod==0){
        suma+=1;
    }

    else{
        for(int cont=0;cont<mod;cont++){
            k*=mod;
        }
        suma+=k;
        k=1;
    }
}
k=1;
for(int cont=0;cont<N;cont++){
    k*=N;
}
suma+=k;
cout<<"El resultado de la suma es: "<<suma<<endl;
}
