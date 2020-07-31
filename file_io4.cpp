#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("student", ios::out);
    char name[30], ch;
    float marks = 0.0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student" << (i + 1) << ":\t Name:";
        cin.get(name,30);
        cout << "\t\tMarks:";
        cin >> marks;
        cin.get(ch); //to empty input buffer
        fout << name << endl
             << marks << endl;
    }
    fout.close();  //disconnect student file from fout 
    ifstream fin("student",ios::in);
    fin.seekg(0);  //to bringing file pointer at the beginning
     cout<<endl;
      for (int i = 0; i <5; i++)    //display records
      {
          fin.get(name,30);    //read name from file student
          fin.get(ch);
          fin>>marks;     //read marks from file student
          fin.get(ch);
          cout<<"student Name:"<<name;
          cout<<"\t Marks:"<<marks<<endl;


      }
      fin.close();



    return 0;
}