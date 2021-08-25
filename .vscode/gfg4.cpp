
#include <bits/stdc++.h>
using namespace std;
  
int countOccurrences(char *str, 
                    string word)
{
    char *p;
  
    
    vector<string> a;
  
    p = strtok(str, " ");
    while (p != NULL)
    {
        a.push_back(p);
        p = strtok(NULL, " ");
    }
  
  
    int c = 0;
    for (int i = 0; i < a.size(); i++)
  
    
        if (word == a[i])
            c++;
    return c;
}
  

int main()
{
    char str[] = "GeeksforGeeks A computer science portal for geeks ";
    string word;
    cin>>word;
    cout << countOccurrences(str, word);
    return 0;
}
  