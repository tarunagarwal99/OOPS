#include<iostream>
using namespace std;

int main(){
    
    

int numSequence;
int numQueries;
int size;

cin >> numSequence >> numQueries;

int** arr = new int*[numSequence];

int** dummy = new int*[numQueries];
for(int i = 0 ; i < numQueries; i++)
    dummy[i] = new int[2];

for(int i = 0; i < numSequence; i++)
{
     cin >> size;
     arr[i] = new int[size];
     for(int j = 0; j < size; j++)
         cin >> arr[i][j];
}

for(int i = 0 ; i < numQueries; i++)
    cin >> dummy[i][0] >> dummy[i][1];

for(int i = 0 ; i < numQueries; i++)
   cout << arr[dummy[i][0]][dummy[i][1]] << endl;

return 0;
}