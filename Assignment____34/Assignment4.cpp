#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
    int Data;
    node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , int no )
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> Next = *First;
        *First = newn;
    }
}
void Display(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        cout << "|" << temp->Data << "|->";
        temp = temp->Next;
    }
    cout <<endl;
}
int Maximun(PNODE First)
{
    int iMax = First->Data;;
    while(First != NULL)
    {
        if(iMax < First->Data)
        {
            iMax = First->Data;   
        }
        First = First->Next;
    }
    return iMax;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    InsertFirst(&Head,51);
    InsertFirst(&Head,11);
    InsertFirst(&Head,21);
    Display(Head);

    iRet = Maximun(Head);
    
    cout << "Maximun is :" << iRet <<endl;
    return 0;
}