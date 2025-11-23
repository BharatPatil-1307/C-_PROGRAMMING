#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
    int data;
    node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFisrt(PPNODE first, int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = *first;

    *first = newn;
}

void Display(PNODE first)
{
    
    while(first != NULL)
    {
        cout <<"|" <<first->data<<"|->";
        first = first->next;
    }
    cout <<"NULL\n";
}

int SummationEven(PNODE first , int No)
{
    int iSum = 0;
    while(first != NULL)
    {
        if(first->data % 2 == 0)
        {
            iSum = iSum + first->data;
        }
        
        first = first ->next;
    }
   
    return iSum;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFisrt(&head , 32);
    InsertFisrt(&head , 11);
    InsertFisrt(&head , 41);
    InsertFisrt(&head , 17);
    InsertFisrt(&head , 28);
    Display(head);
    iRet = SummationEven(head,30);
    cout <<"Summation of Even linked list : " <<iRet <<endl;
    
    return 0;
}