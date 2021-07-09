//problem 3 -majority element
//array
//gfg must do question
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int count = 0;
        int element = 0;
        for (int num : nums)
        {
            if (count == 0)
            {
                element = num;
            }
            if(num==element) count+=1;
            else count-=1;

        }
        return element;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution obj;
        cout<<obj.majorityElement(arr);

        
    }
    return 0;
}