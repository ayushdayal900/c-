// 1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

//---------------------------------------------------------------------------------------------------------------------------------------

//     #include<iostream>
//     using namespace std;


// class Circle {

//     private : float r;

//     public :
    
//     Circle(float x){
//         r=x;
//     }


//     int area(){
//         cout<<"Area of circle is : "<<3.14*r*r<<"cm^2"<<endl;
//         return 3.14*r*r;
//     }

//     void circum(){
//         cout<<"Circumference of circle is : "<<3.14*2*r<<"(cm)"<<endl;
//     }

// };


//     int main(){
//         float ra;
//         cout<<"Enter radius :"<<endl;
//         cin>>ra;

//         Circle c(ra);        
//         c.area();
//         c.circum();

//         float k= c.area();
//         cout<<k;

//         return 0;

//     }
//---------------------------------------------------------m2----------


// #include <iostream>
// using namespace std;

// class Circle {
//     private: 

//     int r;

//     public:

//     int area(){
//        return 3.14*r*r;
//     }

//     int circumference(){
//         return 2*3.14*r;
//     }
//     void get_data(){
//         cout<<"Enter the Radius of circle: ";
//         cin>>r;
//     }

//     void put_data(){
//         cout<<"The Area of circle having radius "<<r<<" is : "<<area()<<endl;
//         cout<<"The CIrcumference of circle having radius "<<r<<" is : "<<circumference();
//     }
// };

// int main (){
//     Circle c1;
//     c1.get_data();
//     c1.put_data();
//     return 0;
// }


// derived class called Circle that inherits from Shape and adds a 
// member function calculateArea() to calculate and display the 
// area of the circle.


// #include<iostream>
// using namespace std;


// class shape{

//     public :

//     virtual void area(int r);
// };


// class Circle: public shape{

//     public :
//     void area(int r1){
//         int r2=r1;
//         cout<<"area is : "<<3.14*r2*r2<<endl;
//     }
// };

// int main(){

//     shape* s;

//     Circle c;
//     s = &c;
//     s->area(7);

//     return 0;
// }



// Define a base class Bird with a virtual function sing().
// Create a derived class Sparrow that overrides the sing()
// function to print "Chirp!".In the main function, create
// an object of type Sparrow and call the sing() function


//     #include<iostream>
//     using namespace std;

// class bird{

//     public:

//     virtual void sing(){
//         cout<<"singing..."<<endl;
//     }

// };


// class sparrow: public bird{

//     public:

//     void sing(){
//         cout<<"Chirp........"<<endl;
//     }

// };


// int main(){
//     sparrow s;
//     s.sing();
//     return 0;
// }




// Write a C++ class that has a private member and declare a friend function to access and modify that private member. Provide a sample usage of the class and the friend function.

// Create a C++ program that demonstrates the use of multiple friend functions in a single class. Show how these friend functions interact with the class and each other.

// Implement a C++ program with two classes, where one class is a friend of another. Illustrate how the friend class can access private members of the other class.

// Design a C++ program that uses a friend function to overload the "+" operator for two different classes. Provide a demonstration of adding objects of these classes using the overloaded operator.

// Create a C++ class representing a geometric shape. Implement a friend function that calculates the area of the shape. Include subclasses for different shapes and demonstrate the use of the friend function for each.

// 

// Develop a C++ program that uses a friend function to compare two objects of a class and determine if they are equal. Provide a demonstration with sample data.

// Implement a C++ program with a class that has private members representing a date (day, month, year). Create a friend function to compare two date objects and determine which one comes first.

// Write a C++ program that demonstrates the concept of "Friendship is not mutual" by having a friend function in Class A that can access private members of Class B, but not vice versa.



//Write a C++ program with a base class and a derived class. 
//Declare a friend function in the base class that is then defined in 
//the derived class. Illustrate how the friend function operates on 
//objects of the derived class.


#include<iostream>
#include<string.h>

using namespace std;

class numbers{


    int n1=1;
    int n2=2;

    string pass= "abc";

    public:

    friend void friendfunction(numbers n);

};

    void friendfunction(numbers num){
        cout<<"friend function is called "<<endl;
        cout<<num.n1<<endl;
        cout<<num.n2<<endl;
        cout<<num.pass<<endl;
    }


    int main()
    {
        numbers nu;
        friendfunction(nu);
        return 0;
    }