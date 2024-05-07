#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter 3 numbers."<<endl;

    cout<<"number 1 : ";
    cin>>n1;
    cout<<"number 2 : ";
    cin>>n2;
    cout<<"number 3 : ";
    cin>>n3;

    
    if(n1>n2 && n1>n3){
        cout<<"number "<<n1<<" is greatest."<<endl;
    }

    if(n2>n1 && n2>n3){
        cout<<"number "<<n2<<" is greatest."<<endl;
    }

    if(n3>n2 && n3>n1){
        cout<<"number "<<n3<<" is greatest."<<endl;
    }

    return 0;

}

