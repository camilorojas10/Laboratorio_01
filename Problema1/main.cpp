#include <iostream>

using namespace std;
char N;
int main()
{
    cout << "ingrese una letra" << endl;cin>>N;


    if(N==65||N==69||N==73||N==79||N==85||N==97||N==101||N==105||N==111||N==117){
        cout<<"es una vocal"<<endl;
    }
    else if((N>=65&&N<=90)||(N>=97&&N<=122)){
        cout<<"Es una consonante"<<endl; }

    else{
        cout<<"No es una letra"<<endl;
    }
    return 0;
}
