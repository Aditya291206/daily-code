#include<iostream>
using namespace std;

struct node{
   int data;
   node* next;
};

int main()
{     
    node *head = NULL, *temp, *newnode;
    int found = 1;

    while(found)
    {
        newnode = new node();
        cout << "enter the value" << endl;
        cin >> newnode->data;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "do you want to proceed further yes->1 no->0" << endl;
        cin >> found;
    }

    temp = head;
    cout << "Linked list" << endl;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    int per, pos, val;
    cout << "you want to enter element in between yes->1, no->0" << endl;
    cin >> per;
    if(per)
    {
        cout << "enter the position for inserting (1-indexed)" << endl;
        cin >> pos;
        cout << "write value to insert" << endl;
        cin >> val;

        newnode = new node();
        newnode->data = val;
        newnode->next = NULL;
        temp = head;
        if(pos==1)
        {
            newnode->next=head;
            head=newnode;
            
         
        }
       else
       {
        for(int i = 1; i <pos-1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
       } 
    }
    else 
    {
        cout << "No insertion done." << endl;
    }

    temp = head;
    cout << "Updated linked list after insertion" << endl;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    int per1, pos1;
    node* prev = NULL;

    cout << "you want to delete any element yes->1 or no->0" << endl;
    cin >> per1;
    if(per1)
    {
        cout << "enter the position to delete (1-indexed)" << endl;
        cin >> pos1;
        temp = head;

        if(pos1 == 1)  
        {
            head = head->next;
            delete temp;
        }
        else
        {
            
            for(int i = 1; i < pos1; i++)
            { 
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
    }

    temp = head;
    cout << "Updated linked list after deletion" << endl;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
