#include <bits/stdc++.h>
using namespace std;
 

void printlargest2nd(int arr[], int n)
{
    int i, first, second;
 
    if (n < 2) {
        printf(" Invalid Input ");
        return;
    }
 
   
    sort(arr, arr + n);
 
    for (i = n - 2; i >= 0; i--) {
  
        if (arr[i] != arr[n - 1]) {
            printf("The second largest element is: %d\n", arr[i]);
            return;
        }
    }
 
    printf("There is no second largest element\n");
}
 

int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printlargest2nd(arr, n);
    return 0;
}