#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream fout;
    fout.open("abc",ios::app);
    if(!fout){
        cout<<"the file can not be opened!!"<<endl;
        return 1;
        }
        char ch;
        int line=0;
        //write the characters
    for (int i = 33; i < 128 ; i++)
    {
        cout.put((char)i);
    }
    fout.close();
    //now display the content of the file
    ifstream fin;
    fin.open("abc",ios::in);
   fin.seekg(0);   //for restart the pointer from starting.
    for ( int i = 33; i < 128; i++)
    {
        fin.get(ch);
        cout<<"  "<<i<<"=";
        cout.put((char)i);
        if(!(i%8)){
            cout<<endl;
            line++;
        }
        if(line>32){
            system("PAUSE");
            line=0;
        }

    }
    
    

    return 0;
}