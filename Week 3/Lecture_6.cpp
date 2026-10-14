#include <iostream>
#include <string>

using namespace std;


class Person1
{
public: 
    Person1(){
        mPerson = "Default Name ";
    }
    void printName(){
        cout << mPerson;
    }

private:
    string mPerson;
};

class Student : public Person1
{
public:
    Student() : Person1()
    {
        mgpa = 4;
    }
    void printGPA(){
        cout << mgpa;
    }
private:
    int mgpa;
};


int main()
{
    Student myThing  = Student();
    myThing.printGPA();
    /*
 
     Student myThing();
    string hi = myThing.printGPA();
 
    Postfix and Infix Expressions
        - Infix -> 1+2 = 3
        - Postfix -> 2 3 + = 5
                  -> 34 + 5* = 35
                  - 3 + 4 * 5 = 345*+
        - How it works
            - Start with left most token
            - If number - push to stack
            - of token is the operator -> see later
                - Pop the top valeu into a variable called v2 and the second to top value into v1
                - Apply operator to v1 and v2
                - push the result of the operator on the stack 
            - If there are more tokens advance to the next and go back go
            - Stacks can also be used to convert infix expressions to postfix expressions
            We want to do the so that we an do the connnn
        Ex. Soling a mase a maze with a stack
            - Have individual pointssss
            We create two classes, Point and a stack
            - Push starting point onto the stack
            - Mark the starting point as discorvered
            - Wile the stack is not empty
                - Pop the top point of the stack into a VARIABLE STRUCTURE
                    If were at the endpoint cnod!
                    - If slot the the south is unciscovered and undiscorvred - > 
                    - If slot to the WE-NS is open and undiscovered Mark(cur +- 1, cury-+1) Push curr01, -1
            This algorith is called the dpth first search - REMEMBER THIS THIS IS ON THE EXAM
    Queue
        - First in First out
        - Things get in line and you always take the first thing from the front of the line
        - You enqueue and dequeue 
        The Queue Interfase
            void enqueue(int a)
            int dequeue()
            bool isEmbty()
            int size()
            int getFront()
        Computers use quests for keyboard inputs
            - It can also search mazes
                - What it does is search basically in a radius growing larger with each iteration 
                - With each point you add to queue the points that are open arround it
                    BREATH FIRST SEARCH - REMEMBER
        Mazes with queues
        Implementations
            - int queue[6], rear = 0
                You keep a counter of where the rear is 
            - A linked list
                Everytime we insert an item we add a new node to teh end of a linked list
                Everytime I dequeue I remove the Node attached to the head pointer
            - The sicrular queue
                - This has the advantages of an array 
                - What you do is that you keep a head, tail, and a count integer all initialized at zero
                    - Evertime we enqueue we add to the tail index and the counter index
                    - Everytime we dequeue we add to head and subtract from 
                    - If the head or the tail go Past the end of the array, set it back to 0
    Inheritance
        - The main idea is similar to this
            Student Inherits from Person --> Student has all the properties from the parent class
        - We start with a base class --> Get a derived class from it 
        - Should only use in cases when you can say A is a part of B, of whcih A is going to be a subclass or a child of B
        - Our base, or superclass is the parent class 
        - Classes derived from a base class are known as subclasses or derived classes
        - The three uses of Inheritance
            Reuse Extension Specialization 
        - Child classes can use all of Persons public methods 
        - Private Members of the parent class are hidden from the child
        - If you want to expose a private base class member to its derived classes but still hide it from unrelated classes and functions use the protected keyword 
            -  NEVER MY YOU MEMBER VARIABLES PROTECTED OR PUBLIC.

    */


}

