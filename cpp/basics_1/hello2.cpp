// #include<iostream>

// int main(){
//     std::cout<<"hello"<<std::endl;
//     return 0;
// }

//------------------------------------------


// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"hello"<<endl;
//     int n=1;
//     cout<<n+0<<endl;
//     cout<<n+1<<endl;
//     cout<<n+2<<endl;
//     cout<<n+3<<endl;
//     return 0;
// }


//----------------------------------------------


// #include<iostream>
// using namespace std;

// int main(){
//     int user_age=10;
//     double temperature=20.6;
//     bool is_alive=false;
//     string user_name = "ayush";

//     cout<<user_age<<endl;
//     cout<<temperature<<endl;
//     cout<<is_alive<<endl;
//     cout<<user_name<<endl;

//     return 0;
// }


//-------------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){

//     const double max_temp=76.80;
//     const int seconds_per_hour=3600;

//     int user_age=10;
//     double temperature=20.6;
//     bool is_alive=false;
//     string user_name = "ayush";

//     cout<<user_age<<endl;
//     cout<<temperature<<endl;
//     cout<<is_alive<<endl;
//     cout<<user_name<<endl;

//     max_temp=20;
//     seconds_per_hour=10;

//     return 0;
// }


//-----------------------------------------------------


// #include<iostream>
// using namespace std;

// int main(){

//    double temp_list[4]={1,2,3,4};

//    temp_list[0]=100;

//    cout<<"temp 1 = "<<temp_list[0]<<endl;
//    cout<<"temp 2 = "<<temp_list[1]<<endl;
//    cout<<"temp 3 = "<<temp_list[2]<<endl;
//    cout<<"temp 4 = "<<temp_list[3]<<endl;

//     return 0;
// }

//-------------------------------------------

#include<iostream>
#include<vector>
using namespace std;

using namespace std;

int main(){

   double temp_list[4]={1,2,3,4};

   temp_list[0]=100;

   cout<<"temp 1 = "<<temp_list[0]<<endl;
   cout<<"temp 2 = "<<temp_list[1]<<endl;
   cout<<"temp 3 = "<<temp_list[2]<<endl;
   cout<<"temp 4 = "<<temp_list[3]<<endl;

   vector<int> numbers = {10,20,30,40,50};
   cout<<numbers.at(0)<<endl;
   cout<<numbers.at(1)<<endl;
   cout<<numbers.at(2)<<endl;
   cout<<numbers.at(3)<<endl;
   cout<<numbers.at(4)<<endl;

   numbers.at(0)=100;
   cout<<numbers.at(0)<<endl;
   
   numbers.push_back(2342);
   cout<<numbers.size()<<endl;

      

    return 0;
}
