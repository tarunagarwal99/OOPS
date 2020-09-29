#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Display the element of vector: "<<endl;
    for (int  i = 0; i < v.size(); i++)

    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main() {

    vector<int> vect1;//zero length integer vector.
    display(vect1);
    vector<char> vect2; //4-element character vector.
    vect2.push_back('5');
    display(vect2);
    vector<char> vect3(vect2);   //4-element character vector from vect-3
    display(vect3);
    vector<int> vect4(6,9);  //vectname(n,x)-> means it will print n copies of element x.
    display(vect4);   
    // int element,size;
    // cout<<"enter the size of the vector:"<<endl;
    // cin>>size;
    // for (int  i = 0; i < size; i++)
    // {
    //     cout<<"Element to be inseted in the vector: "<<endl;
    //     cin>>element;
    //     vect1.push_back(element);
    // }
    // //vect1.pop_back();
    //  display(vect1);
    //  vector<int>:: iterator iter=vect1.end();
    //  vect1.insert(iter-1,5,698);   //here inert(iter add,n,value)-> n is the number of time the value has to be repeated.
    //  display(vect1);   

    return 0;
}