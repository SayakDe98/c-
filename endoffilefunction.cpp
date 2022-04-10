#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("Sample.txt");
    string s;
    //cout<<"Enter a word to write to file"<<endl;
    //cin>>s;
    cout<<"Enter a sentence to write to file"<<endl;
    getline(cin,s);
    out<<s;
    
    //out<<"I am sayak"<<endl;
    //out<<"How are you doing?"<<endl;


    out.close();

    string s1;
    ifstream in;
    in.open("Sample.txt");
    while(in.eof()==0)
    {
        getline(in , s1);
        cout<<s1<<endl;
    }

    return 0;
}

/*
n this tutorial, we are going to learn about the member functions open and eof of the objects we learnt about previously.

I remember teaching you all about the two methods to open a text file in our C++ program, first one using a constructor which we discussed in the last tutorial, and the second one, using the member function open, which is to be dealt with today.


Using the member function open:

The member function open is used to connect the text file to the C++ program when passed into it.

Understanding the snippet below:

Unlike what we did earlier passing the text file in the object while creating it, we’ll first just declare an object out(any name you wish) of the type ofstream and use its open method to open the text file in the program.
We’ll pass some string lines to the text file using the out operation.
We’ll now close the file using the close function. Now closing is explicitly used to make the system know that we are done with the file. It is always good to use this.
This was all about writing to a file. We’ll now move to the eof function’s vitality in File I/O.


Using the member function eof:

The member function eof(End-of-file) returns a boolean true if the file reaches the end of it and false if not. 

Understanding the snippet below:

We’ll first declare an object in(any name you wish) of the type ifstream and use its open method similar to what we did above, to open the text file in the program.
And now, we’ll declare the string variable st to store the content we’ll receive from the text file sample60.txt.
Now since we not only want the first or some two or three strings present in          the text file, but the whole of it, and we have no idea of what the length of the file is, we’ll use a while loop.
We’ll run the while loop until the file reaches the end of it, and that gets checked by using eof() , which returns 1 or true if the file reaches the end. Till then a 0 or false.
We’ll use getline to store the whole line in the string variable st. Don’t forget to include the header file <string>.
This program now successfully prints the whole content of the text file.


*/
