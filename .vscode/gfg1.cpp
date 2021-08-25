#include <iostream>
using namespace std;
bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false;
      return true;
}
int main() {
   string str;
   cout << "Enter a string: ";
   cin >> str;
   if (isNumeric(str))
      cout << "This is a Number" << endl;
   else
      cout << "This is not a number";
}