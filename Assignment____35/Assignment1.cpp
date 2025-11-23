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
void DisplayPerfect(PNODE first)
{
    int iSum = 0;
    int iCnt = 0;

    while(first != NULL)
    {
        iSum = 0;
        for(iCnt = 1 ; iCnt <= (first->data)/2 ; iCnt++)
        {
            if((first->data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }

        }

        if(iSum == first->data)
        {
            printf("Perfect number is : %d\n",first->data);
        }
        first = first->next;
    }

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFisrt(&head , 32);
    InsertFisrt(&head , 22);
    InsertFisrt(&head , 6);
    InsertFisrt(&head , 1);
    InsertFisrt(&head , 28);
    Display(head);
    DisplayPerfect(head);
    
    return 0;
}