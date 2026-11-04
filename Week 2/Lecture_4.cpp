#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Assignment Operators
        - What happens when we want to set an object from one object to another?
        - Well, we do myVar1 = myVar2
            But what about the values?
            - If something has value 3, we cant put a value 5 here
        - How does this proess work?
            - How can one value in an object thats already initialized?
        - The Assignment Operator is a user defined function thats called when we use to assign the object to another
            - For simplicity consider the following
                void setMeEqualTo(const CSNerd &src)
                {
                    NAME_ = SRC.SRC.NAME;
                    IQ_= STC.IQ
                }
        - The function name for the offical assignment operator is called "operator ="
            - Thissignment obers is used by
            CSNerd& operator=(const &src)
            {
                NAME_ = src.NAME_;
                IQ_= src.IQ_;
                return *this;
            }
        - Why do we need a reference to its self? At the very end?
            - We need this so we can do bultiple assignments in the same statement 
            - Performing operators goes in a light and reads right to leftsas
        -Where else would we need to define an a
         - Say now that we have we have two PiNerd objects
            main(){
            piNerd = ann(c)
            Pinerd ben(f)
            ben = anne
            }   
                - But because Ann has a limited amount of space in hers - it will exhaust
                - We will have a memory leak
            - We can make a destructor so that we can destroy a object at a position
            But we still cant garuentee that there is no memork leak
        Step One for Creating the Assignment Operator
            - Free the resources held by the object of the target object (Through delete)
            - Determine what resources are used by the target object (the ones being held by sour)
            - Allowcate memory resources offor the target object (Through the new command)
            - Allowcate a space for the target
            - Copy
            - Return Self Pointer
            - This then prevents memory leak problems
                Does not allow deletion before intended
        There is still one more problem with the assignment oberator
            - What happens when you try and set a object to itself
            - Ailiassing two different variable is when using two different pointers referencing one object
            - In this scenario, when doing ann = ann, we delete ann,
            - Then when we try to access values of functions from ann, we get default values 
            - Then when we create a new object with now random variables 
            - WHAT WE DO
                - if(&src = this)
                    return *this
    LINKED LISTS
        - What if we do not know how many elements in an array youll need?
            - linked Lists might be better
        - How to Implement?
            - Use Structs
        struct Chest{
            string Treasure;
            Chest* nextChest;
        };  
        You end this with a null pointer
        Then in 
        int main()
        {
            Chest *first, *second, *third;
            first = new Chest; <--String value and pointer but NOT ALWAYS 20 bytes
            second = new Chest;
            third = new Chest;
            first -> Treasure = "Toast";
            first ->nextChest = second;
            second -> Treasure = "French Toast";
            second ->nextChest = third;
            third -> Treasure = "Maple Syrup";
            third ->nextChest = nullptr;
            delete first;
            delete second;
            delete third;
        }
        Instead of Chests, Lets call these things nodes
        And instead of treasure, lets call it value 
        And we call the first pointer as the head
        - To get the address of the noder after the head, do Node* myNode = first ->nextNode;
        But, this current formation would take foreve to write
        We create the Linked List Class:
        class LinkedList
        {
        private:
            struct Node{
                string Value;
                Node* next;
            };
            Node* head;
        public:
            LinkedList(){
                head_ = nullptr;
            }
            void print_items()
            {
                Node *p = head_;
                while (p -> next != nullptr)
                {
                    cout << p -> value;
                    p = p->next; 
                }
            }
        }
        Anytime we iterate through a linked list is called a traversal. 
        void add_front(string v)
        {
            Node *nn;
            nn = new Node; 
            nn -> value = v;
            nn -> next = head_
            head_ = nn;
        }
            -Does this function work for an empty list? - YES!
        bool isLastNode(Node *n)
        {
            if (n ->next == nullptr)
            {return true;}
            return false;
        }
        void insert_after(Node *p, string v)
        {
            Node *nn = new Node;
            nn ->Value = v
            nn -> next = p->next;
            p -> nn;
        }
        Lets try this on the last element in the linked list
            - We run insert_after and it works - so long as you know the last element of the linked list
        void add_rear(string v)
        {
            Node *p = head_;
            while(is_last_node(p) == false)
            {p = p -> next}
            insert_after(p, v);
        }
        void add_alpha(string v)
        {
            if(head_ == nullptr || v < head_ -> value)
                add_front(v);
            while(is_las_node(p) == false)
            {
                if(v < next-> value)
                {
                
                }
            }
        }
        void deleteNode()
        {
        
        }
    */
}