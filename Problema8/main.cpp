#include <iostream>

using namespace std;

int   n,num=1,k=0,cont=0,primo=0;

int main()
{
cout<<"Ingrese un numero para hallar el primo "<<endl;cin>>n;
    while(n>cont){

        for(int i=1;i<=num;i++){
            if (num%i==0){
                k+=1;
            }
        }

        if (k==2){
            cont++;
            primo=num;


        }
        num++;
        k=0;
    }
    cout<<"EL primo numero: "<<cont<<" es: "<<primo<<" "<<endl;
}
