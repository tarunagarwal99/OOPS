#include<iostream>
using namespace std;
template<class T>

class tarun{
       public :
       T data;

       tarun(T n){
           data=n;
       }
       void display();

   };

template<class T>
void tarun<T> :: display(){
    cout<<data;
}

void function(int a){
    cout<<"i am the first function:"<<a<<endl;
}
template<class T>
void function(T a){
    cout<<"i am the first function:"<<a<<endl;
}
int main() {
    tarun<int> obj1(8);
    obj1.display();
     function(8);   //exact match having the highest priority.  
    return 0;
}