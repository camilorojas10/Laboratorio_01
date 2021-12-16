#include <iostream>

using namespace std;

int N,j=1,k,n,i;
int main()
{
cout<<"Ingrese el valor :"<<endl; cin>>N;
n=(N/2)+1;
k=0;
for(int i=n;i>0;i--){
    for(j=1;j<=n;j++){
        if(i%j==0){
            k++;
        }
    }
    if(k==2){
        if(N%i==0){
            cout<<"el mayor factor primo es: "<<i<<endl;
            break;
        }
    }

    k=0;
}
}
