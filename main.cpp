/*
* Course: 2143 - O.O.P
* Assignment: AO2
* purpose: to comment this program
*
*
* @author Tyler Briggs
* @version 1.1 9/5/2018
*/
#include <iostream>
using namespace std;
@@ -19,21 +29,25 @@ struct Node
       next = NULL;
   }
};
// creates list of numbers with the front called head, end called tail
class List
{
 private:
   Node *Head;
   Node *Tail;
   int Size;
// sets heat and tail to null
 public:
   List()
   {
       Head = Tail = NULL;
       Size = 0;
   }
  /*pushes value to the front of list
  
    @param (int) val 
    @return nothing
  */ 
   void Push(int val)
   {
       // allocate new memory and init node
@@ -50,7 +64,11 @@ class List
       }
       Size++;
   }
  /*inserts value into certain place in the list
   
   @param (int) val postion in list where value goes
   @return nothing 
  */
   void Insert(int val)
   {
       // allocate new memory and init node
@@ -66,12 +84,22 @@ class List
       }
       Size++;
   }
  /*Prints last value in list
   prints last value in the list
   
   @param (int) val 
    @return nothing
   */
   void PrintTail()
   {
       cout << Tail->x << endl;
   }
    /*
   prints list
   
    @param nothing 
    @return (string) the number at temp
    */
   string Print()
   {
       Node *Temp = Head;
@@ -85,7 +113,12 @@ class List
        return list;
   }
    /*
   takes value out of list
   
   @param nothing
   @return (int) 0
   */
   // not implemented 
   int Pop()
   {
@@ -150,17 +183,27 @@ class List
       return os;
   }
};
/*
puts values 0 though 25 in 1 list
puts values 50 through 100 in 2 list
prints last value of lists 1 and 2
adds list 1 and 2 together and puts them in list 3
prints list 3
 @param (int) argc, (char) argv
@return (int) 0
*/
int main(int argc, char **argv)
{
   List L1;
   List L2;
    
   //puts values 0 through 25 in list 1
   for (int i = 0; i < 25; i++)
   {
       L1.Push(i);
   }
    //puts values 50 through 100 in list 2
   for (int i = 50; i < 100; i++)
   {
       L2.Push(i);