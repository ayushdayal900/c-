#include<iostream>
using namespace std;

int main(){

    int s1,s2,s3;

    cout<<"Enter 3 sides of triangle"<<endl;
    cout<<"side 1 : "; cin>>s1;
    cout<<"side 2 : "; cin>>s2;
    cout<<"side 3 : "; cin>>s3;

    if(s1==s2 && s2==s3){
        cout<<"Equilateral Triangle."<<endl;
    }

    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"Isosceles Triangle."<<endl;
    }

    else if(s1*s1==s2*s2+s3*s3 || s2*s2==s1*s1+s3*s3 || s3*s3==s1*s1+s2*s2){
        cout<<"Right angled Triangle."<<endl;
    }

    else{
        cout<<"Scalen Triangle"<<endl;
    }



    return 0;
}