#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef node NODE;
typedef node * PNODE;
typedef node ** PPNODE;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = new(NODE);

    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)
    {
        *first = newn;  
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

}

void DisplayLarge(PNODE first)
{
    int iLarge = 0, iDigit = 0 , iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iLarge = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;

        }
         
        printf("%d\n",iLarge);
        
        
        first = first->next;
    }
    printf("\n");

}


void Display(PNODE first)
{
    while(first != NULL)
    {
        cout << "|" <<first->data<<"|->";
        first = first->next;
    }
    cout <<"NULL\n";
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head , 11);
    InsertFirst(&head , 20);
    InsertFirst(&head , 32);
    InsertFirst(&head , 41);
    DisplayLarge(head);
    Display(head);

    return 0;
}