#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
    Recursion
    - We want a function to break itself into smaller subproblems, such that when the function calls itself it can be broken
    - The Lazy Person's Sort
        Split a deck of cards into two equally sized piless
            Hand one ple to a subworker and ask it to run the lazy person sort
            Hand one pile to another subwork and ask it to run the lzay person sort
                Keep splitting till end of the deck
        How do we know when we need to end it?
            We modify this algorithm a bit
            We first check if you are handed one card then you just give it right back
                int mergeSort(int arr[], int n)
                    if n<=1 return;
                    int mid = n/2
                    mergeSort( arr, mid);
                    mergeSort(arr + mind, n - mid)
                    mergeSort(arr, 0 )
        There are two rules to Recursion
            Rule 1 - EVERY RECURSIVE FUNCTION MUST EVENTUALLY STOP CALLING ITSELF OR IT WILL NEVER STOP RUNNING
            Rule 2- Identifies the simplest possible input, and returns a reult without calling itself. 
                This is called the base case - or a stopping condition
            Rule 3 - A recursive function must pass a smaller sub problem
            If we think in terms of linkd lists we have 
            void print list Modwe * ptr
                while ptr != null ptr
                cout << ptr -> value
                ptr = ptr->next
            print_list can be dones by a while loop or recursion
        3 steps to Writing a Recursive Function
            Figure out base cases
            Write function without recursion
            Convert function into a recursive version in just one step
        Examples:
            Step one the pase case in ste simplest pi=oovssible 
                Here are some common case inputs: integer vlalud = 0;
                - An integer point value of 1
                - an empty array
                - an array holding a signle item
                A empty linked list
                A linked list holding a single node
                - An empty string
                A string with a single character
                Basically just return 0,1 or null ptr and ahave the condition equal to 0,1 or null ptr
            sOLVE THIS PROBLEM USING NON RECURSIVE CALLS
                Let the function be the factorial function 
                    int fact f(int x)
                        int f = 1;
                        for int i = 0; i < 3, i ++
                            f *= i;
                        return f
            We test case one item from our list x
                RThen we go to the n-1th item 
                    inf fact(int n){
                        if n == 0 return1;
                        int f = m fact(n-1)
                        return f;
                    }
                    void print(int arr[], int n)
                        if n ==0; return
                        cout << arr[0] << endl;
                        print(arr +1, n -1)'
                    void printr(int arr[], int n)
                        if n ==0 return
                        printr(arr +1, n-1)
                        cout << arr[0] << endl
                    void printr2(int arr[], int n)
                        if n==0 return
                        cout << arr[n-1] << endl;
                        printr(arr, n-1);
            Similar process for Linked Lists
                void printr (Node* p)
                    if p == nullptr; return
                    printr(p->next;
                    cout << p->value;

    */
   return 0;
}