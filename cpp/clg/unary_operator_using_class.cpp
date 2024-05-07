#include<iostream>
using namespace std;

class demo{
    int a ,b;
    public:

    demo(int x, int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    void operator -(){
        a=-a;
        b=-b;

    }

};

int main(){
    //before operator overloading
    demo d(0,3);
    
    d.show();

    //after operator overloading
    -d;
    d.show();
    return 0;
}