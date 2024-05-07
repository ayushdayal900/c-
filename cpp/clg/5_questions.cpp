/* Q.1] consider a class student that derives departement as a class which has the property to acces name id 
and age a data member of class student derive class has a property to fetch name iof the department of a 
 perticular student

 */

// Q2 build compile time polymorphism to calculate multiplication of two numbers
// operator overloading 

// Q3 develop a cpp code to simplify area and perimeter of rectangle

/* Q4 develop a cpp class which has a function calc() tekes two parameter for addition and theb same function 
takes 4 parameter to calculate average
*/

/*
    Q5 draw flow chart and algorithm to chck wether the user is passed or fail
*/

// Q1 -------------------------------------------
# include<iostream>
using namespace std;
class Base1 {
 public:
     Base1()
     { cout << " Base1" << endl;  }
};
  
class Base2 {
 public:
     Base2()
     { cout << "Base2" << endl;  }
};
  
class Derived: public Base1, public Base2 {
   public:
     Derived()
     {  cout << "Derived" << endl;  }
};
  
int main()
{
   Derived d;
   return 0;
}