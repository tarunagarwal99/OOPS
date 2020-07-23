#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int  b;

};

//some important information about protected specifiers
/*  fro private members
                        public derivation    private derivation   protected derivation
1.public member:        public              private                 protected
2.private member:       not inherited        not inherited         not inherited
3.protected member:    protected             private               protected




*/
class Derived:protected Base{

};
int main() {
    Base b;
    Derived d;
    //cout<<b.a;  //here we not able to derive it. 
     //cout<<d.a;   //here we are not able to derive it.
    
    return 0;
}