#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Arrays Addresses and Pointer
        -int nums[3] = {10,20,30};
            - What this does is stores nums, and then the numbers in the consecutive addresses 
        - If we do cout << nums, we get the address of the starting place in the array
            - WE DO NOT NEED THE & OPERATOR to get the arrays address 
        - When doing nums + 1, we get the address of the start of nums adn add to it the number required to get the next element in the array
            - So when doing arr + 1, we get arr + 4 (for integer)
        - When passing an array to a function, we pass the pointer to the function, not the full thing
            - So, say we have 
                - 10 - 3000
                - 20 - 3004
                - 30 - 3008
            - And we have a function printData(int array[]){cout << array[0]; cout << array[1]}
            - And we call that function on 
                - printData(&nums[1]), we get 20, 30 as our output
        - We can use pointers with classes and structs too
            - So we have a Circle class with a seperate function printInfo(Circ *ptr)
            - When we pass in a Circ pointer, we can access functions but doin ptr -> myFunction
    The "this" Pointer
        - Before classes, we used stracts
            - We would do
                - Struct Wallet {int a,b};
                - void init{...} (Constructor like) object
                -void AddBill(Wallet *ptr, int amt)
            - and in main
                - Wallet w;
                - Init(&w);
                - AddBill(&w, 5);
        - With classes:
            - In class def
                class Wallet
                {
                public:
                    void Init();
                    void AddBill(int myBill):
                private:
                    int m1s, m5s;
                }
            - In main
                - Wallet a;
                - a.init();
                - a.AddBill(5);
            - But what C++ does
                - Init(&a);
                - AddBill(&a, 5);
            - Behind the scenes 
                - Wallet::Init() --> Wallet::Init(Wallet *this);
                - Wallet::AddBill(int myBill) --> Wallet::AddBill(Wallet *this, int myBill) 
                - m1s = 0; --> this -> m1s = 0;
        - We can use 'this' explictly
            void Wallet::Init()
            {
                this->m1s = this->m5s = 0;
                cout << "I am at address: " << this;
            }
        - We can also return the 'this' pointer
            class Person
            {
                Person* getMe(){return this;}
                string getName(){return name;}
                string name;
            }
            In Main
                Person a("Blah")
                Person *p= a.getMe();
                cout << p.getName(); 
            Returns "Blah"
        - You can also do the following wher you return *this;
            - You just have to in Main, change Person *p to Person &p; 
        - We can also point to functions
                FuncPointer f = &squared; 
                f(10);
                f = &cubed;
                f(2)
            - This will retun 100, 8
            - The cyntax for a munction pointer is actuall
                void(*f)(int);
    Dyname Memory Allocation
        void computSomethin(int count)
        {
            ptr = askC++forThisMuchMemory(count);
            operateOnTheMemortAt(ptr);
            tellC++ThatWereDoneWithThisMemory(ptr);
        }
        - Now we can use the memory via the pointer
        - We can also my dynamically sized arrays via the new operator 
            int *arr;
            int size;
            cin >> size;
            arr = new int[size];
            arra[0] = array[2] = 15;
            delete [] arr;
        - The new operation for arrays needs two pieces of Information
            - The type of array
            - How many slots
        - Then what happens in the complier?
            - We reserve a space for arr, and size
            - we store a value in size
            - Compiler finds space for the array
            - arr now points to the space where the numbers for the array is tored
            - On delete, the compiler releases the values in the position where the pointer is at
                - NOTE: THE POINTER IS STILL POINTING TO THE LOCATION IT THINKS THE ARRAY IS AT EVEN AFTER DELETE
        - This goes beyone just arrays - structs
                struct Point{int x, y};
            - We can then do
                Point *ptr;
                ptr = new Point();
            - The we have a new pointer that points to some location in memory wher ptr memory will be heald
            - We can also do
                ptr -> x = 10;
                delete ptr; 
            - Again, similarly to deleting an array, the pointer is still there even when the data is released
        - Can do this to array
                Class Nerd{};
            - In Main
                Merd *ptr;
                ptr = new Nerd(myVar1, myVar2);
                ptr -> saySomethingNerdy();
        - But what exactly is Delete releasing? - The object
        - How to use New and Delete in a Class
            class PiNerd
            {
            public:
                PiNerd(int n){
                m_pi = new int[n];
                m_n = n
                };
                //WE MUST NOT HAVE A DESTRUCTOR BC OF NEW IN THE CONSTRUCTOR
                ~PiNerd{delete [] m_pi};
                void showOff();
            private:
                int *m_pi,m_n;
            }
        - You can also have also pointer arrays
            string *q; ==> singular address leads to array 
            string *q[5] ==> multiple address with each singular address leading to a singular address
                SPECIFICALLY FOR THIS ONE YOU MUST DELETED EACH SINGULAR ELEMENT OF THIS ARRAY BECAUSE WE INVOKE A NEW STATMENT ON EACH 
    The Copy Construction
        - When we create a new object based on a existing object
            PiNerd existingNerd(4);
            PiNerd colnedNerd = existingNerd; 
        - But this is too much memory allocation
        - Consider the following
            class CSNerd
            {
            public:
                CSNerd(string name, int IQ)
                {
                    name_ = name
                    IQ_ = name
                }
                CSNerd(const CSNerd &old)
                {
                    name_ = old.name_
                    IQ_ = old.IQ_
                }
            private:
                string name_;
                int IQ_;
            }
        - The parameter MUST BE CONST (otherwise we could change it)
        - MUST Be of the same type of class
        - the parameter to copy constructore MUST be a reference
        - NOTE: In the copy constructor we are able to access private members of the old class object
            - This is because we are in a class, handeling the same class type so we can safely access
        - But doing CSNerd b(a); is weird
            - We can do CSNerd b = a; (This will call our copy constructor)
        - Copy constructors may be used to passing class object by value into functions
        - C++ automatically creates a copy constructor, copying all the values in a class
            THIS IS CALLED A SHALLOW COPY





        
    */
}