#include<iostream>
using namespace std;


int main(){

    int n1,n2,temp;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;

    temp=n1;
    n1=n2;
    n2=temp;

    cout<<"After swapping"<<endl;
    cout<<"number 1 : "<<n1<<endl;
    cout<<"number 2 : "<<n2<<endl;


    return 0;
}