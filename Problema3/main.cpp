#include <iostream>

using namespace std;

int mes,dia;
int main()
{
cout<<"Ingrese el mes y el dia"<<endl; cin>>mes>>dia;
if (mes>12){
cout<<mes<<" Es un mes invalido"<<endl;

}
else{
if(mes==2){

if(dia<29){

    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
}
else if(dia==29){
    cout<<dia<<"/"<<mes<<" Posible año bisiesto"<<endl;
}
else{
    cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
}

}
else if(mes==4|| mes==6 || mes==9 ||mes==11){
if (dia<=30){

    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
}
else{
    cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
}
}
else{
if (dia<=31){
    cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
}
else{cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;

}
}
}
}
