#include<iostream>
#include<map>
#include<String>
using namespace std;

int main() {
       map<string ,int> marksMap;
       marksMap["tarun"]=98;
       marksMap["harish"]=8;
       marksMap["yashraj"]=9;
      // marksMap.insert ({{"shivam",182},{"ashish",45}}) ;

         map<string ,int> :: iterator iter;
         for(iter=marksMap.begin(); iter!=marksMap.end();iter++){
             cout<<(*iter).first<<" "<<(*iter).second<<"\n";
         }
          cout<<"the size is:"<<marksMap.size()<<endl;

       

    return 0;
}