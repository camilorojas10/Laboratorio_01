#include <iostream>

using namespace std;
int N,j,i;
float fact,e;
int main()
{
cout<<"ingrese el numero de elementos usados en la aproximacion: "<<endl;cin>>N;
    fact=1.0;
    e=1.0;
    for (j=1;j<N;j++){
        for(i=1;i<=j;i++){
            fact*=i;
        }
        e=e+1/fact;
        fact=1.0;
    }
    cout<<"e es aproximadamente: "<<e<<endl;
}
