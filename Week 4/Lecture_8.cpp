#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    /*
    Inheritance
        - In a nonmember function, polymorphism allows for a Super/Subclass object to be passed in to act like the superclass object being acted on
        - Consider a function that accepts a Person object as an argument
            - Can we pass a Student as a parameter to it?
                - Yes! Because the student is a subclass of Person
        - The idea behind polymorphism is that i CAN TAKE IN A CLASS AND ALL OF ITS SUB CLASSES 
            Why is this? Well happens is that the nonmember function just straight up pelieves that the "Person" is a Person
                It does not see outside the scope of a person object. 
        Anytime we use a base pointer or a base reference to access a derived oject, that is called polymorphism
            - NOTE WE MUST USE A POINTER OR A REFERENCE FOR POLYMORPHISM TO WORK
            - Chopping will occur - chopping something off of functions
                - If we do function(Person p)
                    - and in main we do Student s;
                    - function(s) - the memory will "chop" off only the Parents parts
    Let us now consider a new class called Shape
        - We will use it to represent different geometric shapes
        - All shapes have an area, and we may define a member function called getArea();
        - Let us have a Square and a Circle
            - we override/make virtual the getArea function to get Area for x amout of 
        - Say we have a prize() function that is dependent on circle/square
            - could just do a Shape *x to do stuff 
                    -If we Square s -  we will get the best outcome'
        - This works in the standard sense as well
            - a void shape() only has the one that 
    When you use the virtual c++ figures out what classs is bein
    g referenced and calls them to and applies a vel

    - We publicly derive one of pmojald inherit a commkh ser l et derive anythunciton.
    Why use polymorphism, it is presponsible to design an implemnt sustems that are more easil ecp]
        Today
            Spape(Square) circle. printprice
        Tomorrow - ve defines tr+ing
    An example of phylmorphism that is particular usefil is for a graphics design
        If we put our shape class there - with a useful function,
            We can just access addShape to our functions, andthen that clearns our code well
        PrintSince were just passing a suare into a printprintPrice, can printprice call square's setSide()?
            NOT THIS CANNOT HAPPEN
            - the function does no see the Circle object in entirety

    Form before, we have been dealing with overrided functions
    What happens if we have no virtual keyword, what does the thing use?
        Then things will print, for square, the function for the base class
            Or print shape in this case

    Mock Midterm Exam 3
    


*/
}