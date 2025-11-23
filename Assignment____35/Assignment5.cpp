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

void SumDigit(PNODE first)
{
    int iSum = 0, iDigit = 0 , iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iSum =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        printf("%d -> Sum of Digits is : %d\n",first->data , iSum);
        first = first->next;
    }
}


int main()
{
    PNODE head = NULL;

    InsertFisrt(&head , 32);
    InsertFisrt(&head , 11);
    InsertFisrt(&head , 41);
    InsertFisrt(&head , 17);
    InsertFisrt(&head , 28);
    Display(head);
    SumDigit(head);
    
    return 0;
}