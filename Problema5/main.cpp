#include <iostream>

using namespace std;
int suma,N,i,j;
int main()
{
cout<<"ingrese un numero para la serie de fibonnaci "<<endl;cin>>N;
    j=0;
    i=1;
    suma=0;

    while(N>i && N>j){
        j+=i;
        i+=j;
        if(i%2 == 0 ){
            suma+=i;
        }
        else if(j%2 == 0){
            suma+=j;
        }
    }
    if(j%2==0 && j>=N){
        suma-=j;
    }
    if(i%2==0 && i>=N){
        suma-=i;
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
}

