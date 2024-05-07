#include <iostream>

using namespace std;

class Complex{
    
        private:
        int real , imag;
        
        public:
        void get(){
            cin>>real>>imag;
        }
        
        Complex operator +(Complex c){
            Complex c1;
            c1.real=real+c.real;
            c1.imag=imag+c.imag;
            return c1;
        }
        
        void put(){
            cout<<real<<"+ i"<<imag<<endl;
        }    
};

int main(){
    Complex c2, c3, result;
    c2.get();
    c3.get();
    
    result=c2+c3;
    
    result.put();
    return 0;
}
