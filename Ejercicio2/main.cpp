#include <iostream>

using namespace std;
int N;
int main()
{
    cout << "Ingese un numero" << endl;
    cin>>N;

    if(N%2==0){
        cout<< N <<" Es un numero par" <<endl;

    }
    else
    {
        cout<<N<<" No es un numero par "<<endl;
    }

    return 0;
}
