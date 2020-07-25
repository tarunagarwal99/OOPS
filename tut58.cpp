#include<iostream>
#include<fstream>

using namespace std;
/*
useful classes for working with file on c++ are:
1.fstreambase
2.ifstream   --> derived from fstreambase
3.ofstream   --> derived from fstreambase
*/
/*
In order to work with file in c++ ,you have to open it.primarilyy ,we have two ways to open it.
1.using the constructor
2.using the member function open() of the class.
*/
int main() {
    string str="tarun agarwal";
    string str2;

    //opening files using constructor and writing it
    // ofstream out("sample58.txt"); //write operation
    // out<<str;
    //opening file using constructor and reading it
    ifstream in("sample58b.txt");  //read operation
    in>>str2; 
    getline(in,str2);
    cout<<str2;
    return 0;
}