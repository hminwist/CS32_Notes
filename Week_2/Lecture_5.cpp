#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    How do you delete a node?
        void del_node(Node *p)
        {
            // Does this work?
            // No!
        }
    Lets start with delete head
        void del_heal{
            if(head == nullprt)
                return
            Mpde *temp = head_
            head_ = head_ -> next
            delete temp
        void del_after(Node *p)
            if (p == nullptr || p ->net == nullptr)
                return
            Node * ftarget = p->nest
            p->net = narget->next
            delete targetl
        Now using the helping functions how doe we 
        }
    class LinkedLost()
    {
    private:
        void del_head();
        void del_After(Node *p)
    public:
        void del(string v)
        {
            if (head == nullptr) return;
            if (head_ -> value ==v)
            {
                del_head();
                return;
            }
            Node *p = head_;
            while(p != nullptr)
            {
                if (p -> next != nullptr && p ->next->value == v)
                {
                    del_after(p);
                    return;
                }
            }
        }
    } 
    How to destroy a loop?
        ~Linked List()
        {
            Node *p = head_;
            while(p != nullptr)
            {
                Node *n = p->next;
                delete p;
                p = n;
            }
        }
    We note that linked lists are not perfect
        - more compex than arrays
        - No instant access to the kth item
        - To add an item at the end of the list I HAVE TO DO 
        - We can fix this problem by a Tail pointer - maybe
            Node *heald_;
            Node *Tail_;
            void add_front
            {
                if(is ...)
                {
                
                } 
                // LOOK SLIDERS
            }
            void insert_After()
            {
                //Add
                if (is_last_node(nn) == true)
                {
                    tail_=nn
                }
            }\
            void add_rear()
            {
                while (is_last_node(p) == false)
                {
                    p = p -> next;
                }
                // DONT DO THE ABOVE DO
                insert_after(tail_, v)
            }
    Double Linked Lists
        Why not have a thing that can go both ways
            Have a next and a previous value in each nodes
                Node * next; 
                Node * prev;
            The first will have the null pointer instead of the last
        To traverse
            Node*p = tail_;
            while(p!= nullptr){
                cout << p->value;
                p -> prev;
            }
    Linked List Cheat Sheet - Look at Slides
    Linked Lists or array - Which is faster?
        It depends 
        - Getting to item 753 --> Array - can directly access index in 1 step
        - Adding element to front - Linked List
        - Remove an item from the middle --> Linked List - have to shift down everything
        - Which is easier to program? --> Array
    Dummy Nodes
        - Every Linked Lists has a header pointer
            But sometimes this adds compications
            Reuires dedicated code
        - We can replace a header pointer with a dummy node
            Node dummy_ 
            Node * header
            public:
            linkedList() : dummy(5, nullptr)
            {
                // replace all references from head_ to dummy_.next
                // Then get rid of all special handeling for special head node handling
                // No Special destruction handeling for Linked Lists
            }
    Stack
        - Last in First Out 
        - Very useful - how computers run
        Stack Operations
            - Put something on top - PUSH
            - Remove top item - POP
            - Look at top item
            - Check to see if stack is empty 
            EXAMPLE
                - push 5, push -3, push 9 
                - Pop 9, pop -3, pop 5
                THIS IS IN EXACT ORDER
        class Stack
        {
        public:
            Stack(): m_top = 0 <--- NOT INDEX OF CURRNT POSITION OF TOP ITEM, IT WILL BE THE INDEX OF THE NEXT OPEN SPOT AT THE TOP ; {}
            void push(int i)
            {
                if(m_top >=Size)
                {
                    exit(-1);
                }
                m_stack[m_top] = val;
                m_top ++;
            }
            int pop()
            {
                if(m_top == 0)
                {
                    exit(-1);
                }
                m_top --;
                return m_stack[m_top];
            }
            boo is_empty()
            {
                if (m_top == 0) return true;
            }
            int peek_top
            {
                if(m_top == 0)
                {
                    exit(-1);
                }
                return m_stack[m_top - 1];
            }
        private:
            // We need an int to store a value, and a way to store multiple values
            // Can use array and counter variable OR linked list
            int m_stack[SIZE]; 
            int m_top
        }
    Stack are in the standard library
        #include <stack>

        std::stack<int> myStack;
        myStack.push(10);
        std::cout << myStack.top();
        myStack.pop(); <- Does not return it 
        myStack.empty();
    Computer uses stack to hold local variables and function parameters



    
    */
}