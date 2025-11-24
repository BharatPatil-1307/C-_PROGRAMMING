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

void DisplayPallindrome(PNODE first)
{
    int iRev = 0, iDigit = 0, iNo = 0;
    while(first != NULL)
    {
        iNo = first->data;
        iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }
        if(iRev == first->data)
        {
            cout << "Pallidrome number :"<< iRev <<"\n";
        }
        first = first->next;
    }
    cout <<"\n";
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

    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    InsertFirst(&head , 65);
    InsertFirst(&head , 6);
    InsertFirst(&head , 12);
    InsertFirst(&head , 414);
    DisplayPallindrome(head);
    Display(head);

    return 0;
}