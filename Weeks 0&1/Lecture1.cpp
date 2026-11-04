#include <iostream>
#include <string>

// Above one

class Nerd 
{
private:
    int myStink, myIQ;
public:
    Nerd(int stink, int IQ)
    {
        myStink = stink;
        myIQ = myIQ;
    }
    ~Nerd();
    void study(int hours)
    {
        myStink = 3 * hours;
        myIQ *= 1.01;
    }
    int getStinkyLevel(int total_stink)
    {
        return myIQ * 10 + 3 * total_stink; 
    }
};
// This class defines a new data type

int main()
{
    /*
    Data Structures and Algorithms 
    --------------------------------
    Algorithm - A set of instructions to complete a task
        - Operates on input data
        - produces an output
        - Can be classified by how long it takes to run and quality of its results
    Example - Quess My Word
        Lets say that we are building a word guessing game
            - User picks secret word
            - Program must find
        linear Search 
            Go to first word --> Go to next --> etc
        Binary Search 
            Go to half of dictionary - See if in first or second half --> Go to the half of the section that the word is in
            To find number of times needing to divide do log_2(input number)
    Data Structure - the set of variables that an algorithm uses to solve a problem
        Consider a data structure to efficently store millions of DNA sequences such that it may be searched 
            - Arrar not the best way to sore data 
            - Too slow to add stuff, fixed sized
        Trie - things in a chain
            - Ex. For atggacatct --> a - t - g - g - a - c - a - t - c - t
            - SEE ATTACHED IMAGE 
                        A---------C----------G-----------T
                |----|----|----|
                A    C    G    T
            |-|-|-|
            A C G T
            To search a trie you search through each level
                - So like you search trhough the first ACGT
                - Then, if the letter is found there, go go into that branch and search the four there
                - If the next in the sequence exists in this branch, go further into that branch
            For this example, the worst case scenario for searching if there/adding is ten steps
        Having the right data structure can make algorithms more efficient 
    Functions allow more people to interface your code
    Abstract Data Type
        - In SC we call a coordinated group of data structures, algorithms, and interface functions an Abstract Data Type
        - In an ADT the data structures and algorithms are secret
        - The ADT provides an interface 
        - Today, we build programs from ADT's
    We use classes to define ADTs in our programs
        - So like 
            DNADatabase myDatabase;
            myDatabase.findSequence("BLAKDFJKASDFA");
            myDatabase.addSequence("MALDSKFJASDFASDA");
        is the implementation of an ADT
    Ex. ADT as a Vending Machine
        - ADT - the vending machine
        - Interface - buttons production
        - Algorithms - things needed to select things in vending machine
        - Data Structure - how things are managed
    Object Oriented Programming
        A programming model for ADTs

    See Above 1
    We use member variables to store permanent attributes of my class 
    Hiding these internal details via a class is called encapsulation 
   */
}