#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Construction - The process of initializing a new object for use when its first created
        - In CS 31 a constructor is a function that itializes an object when its first created
    Destruction - frees the memory and resources used by an object when its lifetime ends 
    Question: What is Initialized:
        - Say that we have a class Constipate taking in a string and a name in a constructur
        - It first, before assigning values to the member variables, assigns memory to the class type constipate
            - If we want to do Constipate d(David, 2); - This works
            - If we do Constipate d; - This will initialize, but anything using the string will use a blank string, and anything using the int will be a garbage val
        What happens?
            - Memory reserved - then construction happens in three phasses
                - Phase 0: Worry about later
                - Phase 1: C++ constructus all non-primitive member variable (strings) in the order they appear in the class
                    - C++ will not automatically initialize primitive values
                - Phase 2: C++ runs the body of the constructor
            - What about no constructor?
                - C++ will run the default constructor
    SEE Image taken in class
        This happens because constructor compliation 
            We have Stomach class first, so that construtor runs (and prints out the message)
            We then have the Intestine class next, so that constructor runs (and prints)
            NOTE: this runs in the order that the code is put
            Then body of Constipate constructor runs - and prints 
        Does not pmatter when variables are in public or private
    SEE 2nd Image taken in class
        Should be "mmm bplate bananas" --> "gurgle gurgle" --> Emi is born
    Class Composition - is when a class holds member variables that are also classes 
    Default Constructor - one that has no required arguments
    Why is the class consotructoin in the order that it is?
        - Well, the constructor can access member variables - cannot have undefined variables 
    Construction
        - Say we have a class MyClass with a constructor that takes an int (and uses it in the constructor)
        - will throw an error if value not passes on construction
        - But we can use the initializer list to bypass the need for initialising in the member variables directly
            - Alloows explicitly passed in values
        - Best practice is to have order of variables in intializer list in same order as written in class
    Lets review (pased off of picture)
        Gassy d("David"); --> belly_ ---> 5 attributed to belly_ ---> name itialized --> name given David value by constructor
    Overloaded Constructors
        - We can have as many constructors as possible - same as function overlading
    See third image
        - the constructor will only skip the third line in this - bc its only defining a pointer 
    Summary of Constructors
        - A constructor is a function that initializes an ojbect when its first created
        - First call calls the constructors for an objects non primitive memters
        - we use an initializer list to initialize member variables that reuire parameters for construction 
        - Constructors run everytime we define a new object 
        - But do not run if defining a pointer
        - we can overlatd constructors
    Destructors
        - Frees all the resources that an object allocates during its lifetime
        - An object often reserves system resources as it runs
        - Destructors ensure that its managed we;
        Example
            - Problems - The temp files are never deleted
        - Any time a class allocates a system resources (reserves using the new command)
        - We must have destructore that frees the memory with the delete function
        Example 2
            - Destruction haappens in the reverse order in the construction phase
        Phase 0 
            - C++ runs object d's destructor body first
        Phase 1
            - C++ destructs all non-primitive member variables in the reverse order they appear in the class 
        Phase 2
            - Well learn about this later
        If not destructor is defined - there exists a default destructuor 
        Example 3
            Ans: Finally relieved -> gurgle gurgle -> mmm rotten bananas
        The constructors body is used first because the destructor can still access member variables
        Summary
            - Frees all resources
            - Runs body first
            - then non primitive variables 
            - Run every time at the lifetimes end
            - When we exit a block where a local variable was definedd and when we delete an object through a pointer 
    Address and Pointers
        - An Address is a number identifying the starting location of a variable in RAM
        - We get a variable's address by the the ampersan symbol
        - An address itself is NOT a variable (guess)
    Pointers 
        - A pointer is a variable - they hold values like o ther variables
        - they hold the memory address 
        - Pointers must have a type - tells us what type of variable it points at 
    The * or the dereference operator takes the address of the pointer variable and uses it to get the value stored at the location in memory 
    Can modified values of stuff from one function in another function   
    */
}