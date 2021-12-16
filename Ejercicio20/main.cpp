#include <iostream>

using namespace std;
int N,num,aux,resultado=0;
int main()
{


    cout << "Ingrese un numero" << endl;
    cin>>N;
    resultado=N;

    while(N>0){
      num=num+N%10;
      num=num*10;
      N=N/10;
}
    if(num/10==resultado){
    cout<<resultado<<"Es palindromo"<<endl;
    }
    else{
        cout<<resultado<<"no es palindromo"<<endl;
    }
    return 0;
}
