#include <iostream>

using namespace std;
int N,aux,segundos=0,minutos=0,horas=0;
int main()
{
    cout << "ingrese los segundos" << endl; cin>>N;
    aux=N;

    while(aux>0){

       segundos=N%60;
        aux=N/60;
        minutos=aux%60;
        aux=aux/60;
        horas=aux%60;
        aux=aux/60;

    }

cout<<horas<<":"<<minutos<<":"<<segundos<<endl;



    return 0;
}
