#include<iostream>
using namespace std;

//here we seen that for different datatype we have to write different fucntion everytime 
//so ,the solution for this is use the template and template gives us generic solution.
   template <typename T> 
   T getMax(T a,T b){
       return a>b?a:b;
   }
  
int main() {
    int x=120,y=600;
    char c1='a',c2='x';
    cout<<getMax<int>(x,y)<<endl;
    cout<<getMax<char>(c1,c2)<<endl;
    return 0;
}