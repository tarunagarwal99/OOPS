<<<<<<< HEAD
 //find the  factorial of given number

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=47;
    long long fact =1;
    for (int i = 2; i <=n; i++)
    {
        fact=(fact*i)%m;

    }
    cout<<fact<<endl;
    
    return 0;
=======
 //find the  factorial of given number

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=47;
    long long fact =1;
    for (int i = 2; i <=n; i++)
    {
        fact=(fact*i)%m;

    }
    cout<<fact<<endl;
    
    return 0;
>>>>>>> adbe25192af96d8a004f11cd7b031817436b8c60
}