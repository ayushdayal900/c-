//Q1. Swap the valuse of two variables using a third variable.

// #include<iostream>
// using namespace std;

// int main(){
//     int num1, num2, temp;
//     cout<<"Enter numbers : "<<endl;
//     cin>>num1>>num2;
//     cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;

//     temp=num1;
//     num1=num2;
//     num2=temp;

//     cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;

//     return 0;
// }

//-------------------------------------------------------
//Q2 A programm to find a number greatest among three numbers


// #include<iostream>
// using namespace std;

// int main(){
    
//     int num1, num2, num3;
//     cout<<"Enter 3 numbers : "<<endl;
//     cin>>num1>>num2>>num3;

//     if(num1>num2){
//         if(num1>num3){
//             cout<<"num1 is greatest"<<endl;
//         }
//         else{
//             cout<<"num3 is greatest"<<endl;
//         }
//     }
//     else{
//         if(num2>num3){
//             cout<<"num2 is greatest"<<endl;
//         }
//         else{
//             cout<<"num3 is greatest"<<endl;
//         }
//     }


//     return 0;
// }

//------------------------------------------------------------------
// Q3 Take inputs of three sides and display the types of triangle

// #include<iostream>
// using namespace std;

// int main(){
    
//     int side1, side2, side3;
//     cout<<"Enter 3 sides : "<<endl;
//     cin>>side1>>side2>>side3;

//     if(side1==side2 && side2==side3){
//         cout<<"Equaliteral Triangle"<<endl;
//     }

//     else if(side1==side2 || side2==side3 || side1==side3){
//         cout<<"Isosceles Triangle"<<endl;
//     }
//     else if(side1*side1==side2*side2+side3*side3 ||
//             side2*side2==side1*side1+side3*side3 ||
//             side3*side3==side2*side2+side1*side1){

//                 cout<<"Right Angled Triangle"<<endl;
//     }

//     else{
//         cout<<"Scalene Triangle"<<endl;
//     }

//     return 0;
// }


//-------------------------------------------------------------
//Q4 Printing fabonacci series up to n

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"No of terms to be printed?"<<endl;
//     cin>>n;

//     int t1=0, t2=1;
//     for(int i=0; i<=n-1; i++){
//         int term = t1+t2;
//         cout<<term<<endl;;
//         t1=t2;
//         t2=term;
//     }

//     return 0;
// }

//-------------------------------------------------------
//Q5 a factorial of a number using rcursive function


// #include <iostream> 
// using namespace std; 
  
// int factorial( int n) 
// { 
//     if (n == 0 || n == 1 || n<0) 
//         return 1; 
//     return n * factorial(n - 1); 
// } 
   
// int main() 
// { 
//     int num ;
//     cin>>num; 
//     cout << "Factorial of "<< num << " is " << factorial(num) << endl; 
//     return 0; 
// } 

//---------------------------------------------------------------------
//Q6 create and print student info by class

// #include<iostream>
// #include<string.h>
// using namespace std;

// class student{

//     string name;
//     int roll_no;
//     string mob_no;

//     public :

//     void get_data_1();

//     void get_data(){
//         cout<<"Enter your name : "<<endl;
//         getline(cin,name);
//         cout<<"Enter roll_no : "<<endl;
//         cin>>roll_no;
//         cout<<"Enter mob_no : "<<endl;
//         //getline(cin,mob_no);
//         cin>>mob_no;
        
//     }

//     void show_data(){
//         cout<<"name    : "<<name<<endl;
//         cout<<"roll no : "<<roll_no<<endl;
//         cout<<"mob_no  :"<<mob_no<<endl;
//     }
// };

// void student :: get_data_1(){

//     cout<<"hii"<<endl;

// }

// int main(){
//     student s1;
//     s1.get_data();
//     s1.show_data();
//     s1.get_data_1();
//     return 0;
// }


//Q7 Use of parameterized constructor to find out if a number is prime or not
// #include<iostream>
// using namespace std;

// class prime{

//     public :
//     int num;

//     prime(int n){
//         num=n;
//     }

//     bool isprime(int num){
//         for(int i=2; i<num; i++){
//             if(num%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     void result(){
//         if(isprime(num)==true){
//             cout<<"no is prime number"<<endl;
//         }
//         else{
//             cout<<"no is not prime number"<<endl;
//         }
//     }


// };
// int main(){
//     prime p(1);
//     p.isprime(1);
//     p.result();
//     return 0;
// }


//Q8 Programm to print a student info using two classes and simple inheritence

// #include<iostream>
// #include<string.h>
// using namespace std;

// class student_base{

//     public:
//     string name;
//     string mob_no;
//     int roll_no;

//     void get_data(){
//         cout<<"Enter name : "<<endl;
//         //getline(cin,name);
//         cin>>name;

//         cout<<"Enter mob_no: "<<endl;
//         //getline(cin,mob_no);
//         cin>>mob_no;

//         cout<<"Enter roll_no: "<<endl;
//         cin>>roll_no;

//     }
//     void show_data(){
//         cout<<"name   : "<<name<<endl;
//         cout<<"mob_no : "<<mob_no<<endl;
//         cout<<"roll_no: "<<roll_no<<endl;

//     }
    
// };

// class student_derived : public student_base{

//     public :

//     int abc_id;

//     void get(){
//         get_data();        
//         cout<<"Enter abc_id"<<endl;
//         cin>>abc_id;
//     }

//     void show(){
//         show_data();
//         cout<<"abc_id : "<<abc_id<<endl;
//     }
// };

// int main(){
//     // student_base sb;
//     // sb.get_data();
//     // sb.show_data();

//     student_derived sd;
//     sd.get();
//     sd.show();

//     return 0;
// }


//Q9 programm to add two complex numbers using operator overloading

// #include<iostream>
// using namespace std;

// class Complex{

//     public :
//     int real,imag;

//     Complex(int x, int y){
//         real=x;
//         imag=y;
//     }


//      Complex(){
//         real=0;
//         imag=0;
//     }

//     Complex operator +(Complex c){
//         Complex c2;
//         c2.real=real+c.real;
//         c2.imag=imag+c.imag;
//         return c2;
//     }

// };

// int main(){
//     Complex c11(2,5);
//     Complex c22(9,6);
//     Complex c33 = c11+c22;

//     cout<<c33.real<<" + i"<<c33.imag;
//     return 0;
// }


//Q10

// #include<iostream>
// using namespace std;

// // Base Class
// class Vehicle {
// public:
//     virtual void move() {
//         cout << "The vehicle is moving" << endl;
//     }
// };

// Derived Class 1
// class Car : public Vehicle {
// public:
//     void move(){
//         cout << "The car is moving" << endl;
//     }
// };

// // Derived Class 2
// class Bike : public Vehicle {
// public:
//     void move(){
//         cout << "The bike is moving" << endl;
//     }
// };

// int main() {
//     // Creating base class pointer
//     Vehicle* vehicle;

//     // Pointing to a derived class 1
//     Car car;
//     vehicle = &car;
//     vehicle->move();

//     // Pointing to a derived class 2
//     Bike bike;
//     vehicle = &bike;
//     vehicle->move();

//     return 0;
// }


