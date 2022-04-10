#include<iostream>
using namespace std;
int main()
{
    int *ptr1;//create pointer
    int *ptr2;//create pointer
    int *ptr3;//create pointer
    int avg;//create pointer

    ptr1=new int;//dynamic allocation of pointer
    ptr2=new int;//dynamic allocation of pointer
    ptr3=new int;//dynamic allocation of pointer

    cout<<"Enter first number:"<<endl;
    cin>>*ptr1;
    cout<<"Enter second number"<<endl;
    cin>>*ptr2;
    cout<<"Enter third number"<<endl;
    cin>>*ptr3;
    avg=(*ptr1+*ptr2+*ptr3)/3;//dereference operator is used to display the values

    cout<<"Average of three numbers is :"<<avg<<endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    cout<<"We used delete operation which deletes dynamically allocated memory"<<endl;
    cout<<"Now the garbage value present in first number,second number,third number is :"<<*ptr1<<" , "<<*ptr2<<" ,"<<*ptr3<<" "<<endl;

    return 0;
    
}
/*
Memory management can be defined as the process to manage a computer's memory.
example:assigning memory to programs,variables,etc,so that it doesnt affect the overallperformance.
Memory managent is required to avoid wastage of memory and to make sure allocation takes place efficently.

During the declaration of arrays,sometimes the exact memory is not known to u,and that is why we declare an array of max size,whichresuls in memory wastage
To avoid such a case,we use memory allocation.

Programming languages like Java,Python,etc,have the compiler that manages the memory allocation.

In the ccase of C++ the allocation and deallocation of memory are done manually.

In the case of C++ the allocation and deallocation of memory are done manually.

In C++,there are two operators that are used for the allocation and deallocation of memory:
1)new operator
2)delete operator
whereas in C ,we use malloc and calloc to allocate memory at runtime.free is used to deallocate in C

The new operator in C++ is used for dynamic memory allocation.
The new operator is used for the creation of the object.

Syntax:
    Pointervariable=new datatype;
    PointerVariable=new datatype[size];
In case of arrays,the new keyword returns the address of the first element.
int *ptr;
ptr= new int;
*ptr=75;

The delete operator in C++ is used for deallocation of memory or for releasing of memory space.
Once the memory is no longer required, then we have to deallocate the memory using the delete operator.

Syntax:
    delete PointerVariable;
Syntax for arrays:
    delete [] PointerVariable;

    int *ptr;
    ptr=new int;
    *ptr=75;
    //after printing
    delete ptr;

    Advantages of new operator:
    new operator can be overloaded
    the return type of new is of the type for which the memory was allocated
    it automatically computes the size of data object
    it can intialize an object while creating a memory for it.
*/