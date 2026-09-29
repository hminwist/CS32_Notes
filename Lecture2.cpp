#include <iostream>
#include <string>

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
    */
}