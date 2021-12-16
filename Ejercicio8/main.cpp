#include <iostream>

using namespace std;
int N;
int i;
int cont;
int m;
int main()
{
    m=1;
    cout << "Ingrese un numero N" << endl;
    cin>>N;

    for(i=1;i<=N;i++){
        cont=i;
        m=m*i;
    }
     cout<<N<<"!"<<"="<<m<<endl;

    return 0;
}
