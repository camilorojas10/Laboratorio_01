#include <iostream>

using namespace std;

int fil,lado1,lado,k,col,suma,cont,n;
int main()
{
suma=0;
k=1;
cout<<"ingrese un numero impar: "<<endl;cin>>lado;
for(int fil=0, lado1= lado;fil<lado;fil++){
    if(fil>(lado+1)/2) k++;
    for(int col=0, cont=0; col<lado; col++){
        if(fil<=col && fil<=lado-col-1){
            n=lado1*(lado1-1)+1;
            cout<<n+cont<<'\t';
            if(fil==col || fil+col==lado-1){
                suma+=n+cont;
            }
            cont++;
        }
        else if(fil>=col && fil>=lado-col-1){
            n=lado1*(lado1-1)+1-(2*k);
            cout<<n-cont<<'\t';
            if(fil==col || fil+col==lado-1){
                suma+=n-cont;
            }
            cont++;
        }
        else if(fil>col && fil<lado-col-1){
            cout<<"\t";                         //Se dibujo las diagonales y la base
        }
        else{
            cout<<"\t";                         //Se dibujo la diagonales y las bases
        }
    }
    if(fil<(lado-1)/2){
        lado1-=2;
    }
    else {
        lado1+=2;
    }
    cout<<endl<<endl;
}
cout<<"Es una espiral de "<<lado<<"x"<<lado<<", la suma es: "<<suma<<endl;
}
