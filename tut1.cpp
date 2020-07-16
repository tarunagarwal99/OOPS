#include<iostream>
 using namespace std;
 int glo=6;  //global variable
 void sum(){
     cout<<glo;
 }
 int main(int argc, char const *argv[])
 {
     int glo=6; //local variable
     glo=78;
        // this is a command
        /*this is a multiline commnet 
        this is 
         a multi
         __LINE__
         comment */
         int a=12,b=14;
         float pi=3.14;
         sum();   // here firstly sum funvtion is calling anf then cout is call in the main  function
         cout<<glo;

    // cout<<"the value of a is:"<<a<<" .the value of b is:"<<b;
    // cout<<" \nthe vallue of pi is:"<<pi;
     return 0;
 }
 
