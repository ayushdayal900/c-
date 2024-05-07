#include<iostream>
using namespace std;

class demo2{
    int a ,b;
    public:


    void get(){
        cout<<"enter numbers : "<<endl;
        cin>>a;
        cin>>b;
    }

    void put(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    

    demo2 operator + (demo2 bb){

        demo2 cc;
        cc.a = a+bb.a;
        return cc;
    }


    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }


};

int main(){

    demo2 aa,bb,cc;
    aa.get();
    bb.get();
    cc=aa+bb;

    cc.put();
    return 0;
}