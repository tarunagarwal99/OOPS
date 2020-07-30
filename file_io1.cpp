#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream filout;
    filout.open("marks.dat",ios::app);  //here mode specifier(ios::app) is used to retain the previous output.
    char ans='y';
    int rollno;
    float marks;
    while(ans=='y'||ans=='Y'){
        cout<<"enter the roll no of the student:"<<endl;
        cin>>rollno;
        cout<<"enter the marks of the student:"<<endl;
        cin>>marks;
        filout<<rollno<<'\n'<<marks<<'\n';   // this is used for writing the records to the file
        cout<<"\n want to enter more records?(y/n)..."<<endl;
        cin>>ans;

    }
    filout.close();

    return 0;
}