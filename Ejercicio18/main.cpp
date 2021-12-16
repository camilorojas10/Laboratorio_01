#include <iostream>

using namespace std;
int N,i=1,m;
bool val=false;
int main()
{

    cout << "ingrese un numero N" << endl;
    cin>>N;

    for(i=1;N>=i;i++){
    m=i*i;
    if(N==m){
       val=true;

    }
    }
    if(val==true){
        cout<<N<<" Es una raiz cuadrada perfecta"<<endl;
    }
     else{
              cout<<N<<"No es una raiz cuadrada perfecta"<<endl;
    }

    return 0;
}
