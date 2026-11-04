#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Chopping
        Say we had a function:
            void(Person P){
                cout << p.getName() endl;
            }
        and in main we had 
            Student s("this Name", input1, input2);
            SayHi(s);
        Then the s variable is known to be chopped. 
        But the problem here - on the slide says trouble, is that here it actually works

    SExamples and People
        Say that I have a Politician derived from a person with the person holding a vunction called get name
        The Politician has the ones make a liee
        As seet we can refer to a subcless object as if it were a superclass object
            We do this by doing Sub mySub;
            Super *s = &mySub;
            Then we ca do p -> whatever super function
        This is called upcasting 
            Can we do the do the reverse?
            NO - Bc theres not enought. variables from the super to fit into the sub
                We cannot treat an innocent person as an evil evil politician
    Polymorphism and Virtual Destructors
        You should always make sure that you use virtual destructal destructors when you use inheritance and plymorphism
        Why?
        Professor Class and a My Professor class
            Froessor class has an IQ table
            Math Professor has a array of values
        Then in main we create a Professor p and set it to a new Math Professor;
                This is totally vaild bc a mathprofessor is a child of Professor
            We now have a math professor memory solt.
            So then our pointer p -> MathProf table -> a table
                                  -> myIQ from Professor class
            Upon destruction,
                We call the math professors destructor (virtualized)
                The destructor is run, and the professor class destructor is run
        What happens upon non virtual destructors
            We create the Professor pointer and set it to a new Math professor with a dynamically allocated array
                p -> m_table (Math Professor)-> a table
                  -> m_IQ (Professor)
                So everything good
            On delete p:
                Well, the variable p is a Professor pointer and Prof does not have a virtual destructor,
                So c++ will simply just call Professor's destructor 
                    It releases the Professor pinter, but NEVER RELEASES DYNAMICALLY ALLOCATED THINGS FROM MATH PROFESSOR CLASS
        Another scenario
            Professor is a subclass of person
            In main
                Prof p;
            At the end of main, what destructor will be called 
                You want it to be Professor then Person destructor to happen
                Well, in this case, this works, we get exactly that pehavior
            IT ONLY CAUSES PROBLEMS WHEN DEALING WITH POLYMORPHISM
    So how does it alll work
        Whwe defining variables of a class, C++ ADDS AN INVISIBLE TABLE TO THE OBJECT THAT POINTS TO THE PROPER SET OF FUNCTIONS TO USE 
        This tables is called a vtable that contains an entyr for every virtual function in our class. i 
            What about a derived class?
                A virtual class will aslo create the same vtable as it had for 
        EX. So say that we had a shape and a derived class squard.
            Then for a Shape object, everything inthe the vtable will be pointing to the shap's own functions
            Then for a Square object, evertyhing not overriden in the squard class will point up to the Shap's function.s Overridden functions will point at the Square's functions 
            THES VTABLES ARE RUN TIME THINGS

    PUure Virtual Functions
        Saye we hhave a Superclass Shape class. And we have Triangle, Square, ... subclasses 
        in main:
            Shape *shapes[100];
            shapes[0] = new Square(5);
            shape[1] = new Triangle(3,4);
            display(shapes);
        The base class's ploy on screen will never be called because all the subclasses are plot on screens are done instead
            BUT WE STILL CANNOT DELETE IT EVEN IF IT IS NOT USED - WE NEED THE INHERITANCE / OVERRIDING SO THAT THE SHAP ARRAY CAN CALL THEIR SPECIALIZED VERSION OF PLOT ON SCREEN
        But, it would be nice to not have this useless code.
        What we do is virtual void myOverridenFunction() = 0;
            C++ Knows that this is the dummy - otherwise known as a pure virtual function. 
        IF THERE IS AT LEAST ONE PURE VIRTUAL VUNCTION IN A BASE CLASS, THEN EN THE CLASS IS CALLED AN aBSTRACT bASED cLASS
            An abstract base class base class can have membervariables and other functions
            BUT IT CANNOT BE DEFINED IN MAIN
            BIT IN CANNOT BE DEFINED IN MAIN
                IT wont let you because the vtable would be pointing at nothing 
            The DERIVED CLASS MUST DEFINE ALL PURE VIRTUAL FUNCTIONS LEST IT BECOME AN ABSTRACT BASE CLASS ITSELF
        Why create ABC?
            WE allow users to implement certain functions to prevent common mistakes
                What happens if we cant find the area ofa rectangle?
                    Then the compiler will throw an error
        BUT we can still use ABCs to reference all ghild function
        
    */
    return 0;
}