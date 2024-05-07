
# include <iostream>
# include <string.h>

using namespace std;

class student{
    public :
    string id;
    string name;
    void getData(){
        
        cout<<"Enter your name : "<<endl;
        getline(cin, name);

        cout<<"Enter your id : "<<endl;
        getline(cin, id);     
    }

    void  putData(){
        cout<<"Your name : "<<name<<endl;
        cout<<"Your id   : "<<id<<endl;
    }
};


    int main(){

        student s[5];
        for(int i=0; i<5; i++){
            s[i].getData();
            s[i].putData();
        }
            return 0;
    }