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

int SecondMaximum(PNODE first)
{
    int iMax = 0;
    int SecondMax = 0;
    
    if(first == NULL || first->next == NULL)
    {
        return -1;
    }
    iMax = first->data;
    first = first->next;


    if(first->data > iMax)  
    {
        SecondMax = iMax;
        iMax = first->data;
    }
    else if(first->data <iMax)
    {
        SecondMax = first->data;
    }
    else
    {
        SecondMax = -1;
    }

    first = first->next;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            SecondMax = iMax;
            iMax = first->data;
        }
        else if(first->data > SecondMax && first->data != iMax)
        {
            SecondMax = first->data;
        }
        first = first ->next;
    }
    return SecondMax;
   
    return iMax;
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
    iRet = SecondMaximum(head);
    cout <<"SecondMaximum of linked list : " <<iRet <<endl;
    
    return 0;
}