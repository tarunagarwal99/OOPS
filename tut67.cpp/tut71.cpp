#include<iostream>
#include<list>
using namespace std;
template<class T>
void display(list<T> &lst){
    list<int>::iterator it;
    for (it =lst.begin() ; it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}


int main() {
    list<int> list1;  //list of length 0
    list1.push_front(3);
    list1.push_front(9);
    list1.push_front(30);
    list1.push_front(38);
    list1.push_front(7);
    display(list1);
   // list1.pop_back();
    //list1.remove(9);
    display(list1);


    list<int> list2(7);   //empty list of size 7 
     list<int>::iterator iter=list2.begin();
     *iter=89;
     iter++;
     *iter=4;
     iter++;
     *iter=7;
     iter++;
     display(list2);
     list1.sort();
     list2.sort();
     list1.merge(list2);
     cout<<"list1 after merging:";
     display(list1);

     


    return 0;
}