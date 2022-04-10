#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;

    for(it=lst.begin() ; it!= lst.end() ; it++)
    {
        cout << *it << " " ; 
    }
}

int main()
{
   /*
    list<int> list1;//declaring syntax of list of zero length
    
    list1.push_back(1);
    list1.push_back(9);
    list1.push_front(2);
    list1.push_front(3);

    display(list1);
  */
    /*
    list<int> list2(4);//empty list of length 4
    list<int> :: iterator it;
    it = list2.begin();
    *it = 44;
    it++;
    *it =34;
    it++;
    *it =90;
    it++;
    *it = 888;
    it++;

    display(list2);
    */
   /* list<int> list3;//declaring a list of length 0
    list3.push_front(4);
    list3.push_front(9);
    list3.push_front(10);
    list3.push_front(4);
    list3.push_front(4);
    display(list3);
    cout<<endl;
    list3.remove(4);//removes all occurences of 4 from list
    display(list3);
*/
    list<int> list4;
    list4.push_back(88);
    list4.push_back(8);
    list4.push_back(898);
    list4.push_back(2);
    list4.push_back(86);
    
    display(list4);
    
    list4.pop_back();
    list4.pop_front();
    
    cout<<endl;
    
    display(list4);
    list4.sort();//sorts the list in ascending order
    cout<<endl;
    display(list4);
    list4.reverse();//reverses the list
    cout<<endl;
    display(list4);//displays list in reveresed order

    list4.clear();//clearsall the elements in the list
    cout<<endl;
    cout<<"After using clear function list is like this : "<<endl;
    display(list4);

    return 0;

}
/*
use all lists from website cppreference.com

in list or linked list we can do insertion deletion in middle faster than vectors or arrays
in arrays or vectors we can do searcing sorting faster
*/