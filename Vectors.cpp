#include<iostream>
#include<vector>//declaring vector header file
using namespace std;
template<class T>
void display(vector<T> &v)//function to display vector,we are using T instead of int because we created multiple data types later
{
    for(int i = 0 ; i < v.size() ; i++)//loop for displaying vector and v.size() returns size of vector 
    {
       // cout << v[i] << " " ;//prints vector to output screen
        cout << v.at(i) << " ";//this is an alternative of v[i]
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;//declaring syntax of zero length integer vector
    cout<<"Displaying vec1 " << endl;
    display(vec1);
    vector<char> vec2;//declaring a zero length character vector
     cout<<"Displaying vec2 " << endl;
    display(vec2);
    vector<char> vec3(vec2);//declaring a zero length character vector from vec2
     cout<<"Displaying vec3 " << endl;
    display(vec3);
    vector<double> vec4(4);//displaying a vector of length 4
     cout<<"Displaying vec4 " << endl;
    display(vec4);
    vector<float> vec5(6 , 3);//displaying a vector of length 6 with 3's
     cout<<"Displaying vec5 " << endl;
    display(vec5);
    //int size;//variable to store size of vector
    //cout<<"Enter the size of vector : "<<endl;
   // cin>>size;
   // int element;//variable to store data

    /*
    for(int i = 0 ; i < size ; i++)//loop to enter elements into vector
    {
        cout<<"Enter an element to add to vector : " << endl;
        cin>>element;//accept element from user
        vec1.push_back(element);//vec1.push_back() is used to enter element to the end of vector
    }
    */
   // cout<<"Vector before inserting 52 at beginning : " <<endl;
    //display(vec1);
   //vector<int>  :: iterator iter = vec1.begin();//scope resolution operator is used to generate an iterator and .begin() helps the iterator to point to the beginning of vector.
    //vec1.insert(iter , 52);//.insert() operation helps to insert an element tothe vector.This shows we can change size of vector unlike arrays where we cant
    //cout<<"Vector after inserting 52 at beginning : " <<endl;
    //display(vec1);//invokes or calls display function
    //vec1.insert(iter + 1 , 10 , 5);
    //cout<<"Vector after inserting 5 at 1st index(or 2nd position) 10 times : " <<endl;
   // display(vec1);


    return 0;
}