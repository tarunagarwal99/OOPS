#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kem chooo??"<<endl;
    }
};
class derived:public base1,public base2{
    public:
   void greet(){
        base1::greet();   //this is how we remove ambiguity .

    
    }
};
int main() {
      base1 bs1;
      bs1.greet();
      base2 bs2;
      bs2.greet();
      derived der;
      der.greet();  
    return 0;
}