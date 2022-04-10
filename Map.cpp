#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string , int> marksMap;
    marksMap["Sayak"] = 96;
    marksMap["Bitan"] = 99;
    marksMap["Monkey"] = 88;
    marksMap["Bonzo"] =59;

    map<string , int> :: iterator iter;
    for(iter = marksMap.begin() ; iter!= marksMap.end() ; iter++)
    {
        cout<<(*iter).first <<" " <<(*iter).second<<"\n";//we get output in sorted manner of  alphabets
    }

    marksMap.insert({{"Sayan",55},{"Atul" , 98}});
    cout<<endl;
     for(iter = marksMap.begin() ; iter!= marksMap.end() ; iter++)
    {
        cout<<(*iter).first <<" " <<(*iter).second<<"\n";//we get output in sorted manner of  alphabets
    }
    return 0;
    
}