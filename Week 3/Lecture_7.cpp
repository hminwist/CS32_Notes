#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    The Three uses of Inheritance
        Reuse - Reuses the superclasses functionss
            Can Reuse code when you want and add stuff to it
            Only can see public stuff
                BUT Can always use setters and getters
        Extension
            - add stuff to th base class
            - Extra classes
                - Parent class cannot use child class
        Specialization
            - We override the base case 
            - Say we had a student and a nerdy student class
                - if they both have two version of talk()
                    - The nerdy student class will override 
            But when overriding stuff we need to use the keywork virtual in the base class
                - can also use virtual in the derived class 
            - Parent class cannot access overrided child class function
            - IF YOU DEFINE YOUR MEMBER FUNCTIONS OUTSIDE YOUR CLASS, YOU MUST ONLY USE THE VIRTUAL KEY WORK WIN THE CLASS DEFINITION 
            - DONT Mess with functions just straight up defined outside of the class
            - What happen if I want to call the base classes version of a method that has bee redefined in the child class
                - Parent
                    virtual void cheer(){cout << "Cheer";}
                - Child
                    vvirtual void cheer(){cout << "Go CS32;"}
                    void attend_game(){
                        Student::cheer();
                    }
            - Resues of hidden base class materials
                in child
                    virtual string getString()
                    {
                        myString = Student::getString();
                        return myString + "123"; 
                    }
                in main
                    Child myChild;
                    string x = myChild.getString();
                When Calling the base class version, you can technically change all the base class values as in overritten functions
            A Call to Method M always uses the most overridden version of M found in the Object
    Construction
        - WHAT WAS PHASE ZERO in construction
            - For review 
                1 - c++ constructs all non primitive member variables
                2 - c++ runs the body of the constructor
            - Phase Zero
                - How does inheritance construction work 
                    - Say I have Robot as a subclass of Machine
                    - If I just skip to the Robot construction, after intializing all the non prmitive attributes in Robot
                      I can just call a function from the parent class -We dont want that
                Inheritance First builds the base class and then initializes the sub class
                    - Same order as previous inheritance for previous classes
        In total  
            0 - If B is a subclass of C, C is initialized first
            1 - c++ constructs all non primitive member variables
            2 - c++ runs the body of the constructor
            3 - Return and construct B
         

    */
   
}