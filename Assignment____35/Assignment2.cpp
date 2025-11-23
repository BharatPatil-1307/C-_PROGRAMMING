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

void DisplayPrime(PNODE first)
{
   int iCnt = 0;
   int iFlag = 0;
   while(first != NULL)
   {    
        if(first->data > 1)
        {
            iFlag =  1;

            for(iCnt = 2; iCnt <= (first->data)/2 ;iCnt++)
            {
                if(first->data % iCnt == 0)
                {
                    iFlag =  0;
                    break;
                }
            }
            if(iFlag == 1)
            {
                printf("Prime number is : %d\n",first->data);
            }
        }
        
        first = first->next;
   }
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
    DisplayPrime(head);
    
    return 0;
}