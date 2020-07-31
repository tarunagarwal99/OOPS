#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char ch;
    ifstream fin("marks.dat",ios::in);  //for reading we created ifstream class 
   
   // fin.open("marks.dat",ios::in);
    if(!fin){
        cout<<"cannot open files!!"<<endl;
        return 1;
    }
    while(fin){
        fin.get(ch);  //reads a single character from the associated stream and puts that value in ch.
        cout<<ch;  //to print the geted values

    }
    fin.close();
    return 0;
}