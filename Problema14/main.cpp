#include <iostream>

using namespace std;

int cont,num,semilla,mayor,n;
int main()
{
cout<<"Digite un numero : "<<endl;cin>>num;
    cont=1;
    mayor=0;
    semilla=num;
    for(num;num>1;num--){
        n=num;
        while(n>1){
            cont++;
            if(n%2==0){
                n=n/2;
            }
            else{
                n=(3*n)+1;
            }
        }
        if(cont>mayor){
            mayor=cont;
            semilla=num;
        }
        cont=1;
    }
    cout<<"La serie mas larga es con la semilla: "<<semilla<<" teniendo "<<mayor<<" terminos, su serie es: "<<endl;
    cout<<semilla<<" ";
    while(semilla>1){
        cont++;
        if(semilla%2==0){
            semilla=semilla/2;
            cout<<semilla<<" ";
        }
        else{
            semilla=(3*semilla)+1;
            cout<<semilla<<" ";
        }
    }
    cout<<endl;
}
