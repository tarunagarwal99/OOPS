#include<iostream>
using namespace std;

int main() {
    string str ("Test string");
        for ( string :: iterator it = str.begin(); it!=5; ++it)
            cout << *it;
        return 0;

}