#include <stdio.h>
#include <stdlib.h>

typedef struct nd
{
    int c;
    struct nd *next;
} node;

node *head = NULL;
node *tail = NULL;
int count = 0;

// function for appending new node
void append_beforeTail(int ch)
{
    node *n = malloc(sizeof(node));
    // in case an old list is empty
    if (head == NULL) {
        // กรณี: รายการเก่าว่าง
        head = n;
        tail = n;
        n->next = NULL;
    } else if (head == tail) {
        // กรณี: รายการเก่ามีโหนดเพียงหนึ่ง
        n->next = head->next;
        n->next = NULL;
        head->next = n;
        tail = n;
    } 
        // in case an old list has = 2 nodes
    else if(count == 2) {
        n->next = head->next ; 
        head->next = n; 
    } // in case an old list has >= 3 nodes
    else
    {
        node *current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        n->next = current->next;
        current->next = n;

    }
    n->c = ch;
    count++;
}


void append_thirdNode(int ch)
{
    node *n = malloc(sizeof(node));
    if (head == NULL) {
        head = n;
        tail = n;
        n->next = NULL;
    } else if (head == tail) {
        head->next=n;
        tail = n;
        n->next = NULL;
    } 
    else if(count == 2) {
        tail->next=n;
        tail=n;
        tail->next=NULL;
    }
    else
    {
        node * current = head;
        current = current->next;
        node *temp =current->next;
        n->next=temp;
        current->next=n;
        
    }
    n->c = ch;
    count++;
}



void append_behindHead(int ch) {
    node *n = malloc(sizeof(node));
    
    if (head == NULL) {
        // กรณี: รายการเก่าว่าง
        head = n;
        tail = n;
        n->next = NULL;
    } else if (head == tail) {
        // กรณี: รายการเก่ามีโหนดเพียงหนึ่ง
        n->next = head->next;
        n->next = NULL;
        head->next = n;
        tail = n;
    }else if (count=2) {
        n->next = head->next;
        n->next = NULL;
        head->next = n;
        tail = n;
    } else {
        n->next = tail->next;
        
    }
    
    n->c = ch;
    count++;
}

int main()
{
    // append_beforeTail(1);
    // append_beforeTail(2);
    // append_beforeTail(3);
    // append_beforeTail(4);
    // append_beforeTail(5);
    // append_beforeTail(6);
    // append_beforeTail(7);
    // append_beforeTail(8);
    // append_beforeTail(9);
    
    append_thirdNode(1);
    append_thirdNode(2);
    append_thirdNode(3);
    append_thirdNode(4);
    append_thirdNode(5);
    append_thirdNode(6);
    append_thirdNode(7);
    append_thirdNode(8);
    append_thirdNode(9);


    // append_behindHead(1);
    // append_behindHead(2);
    // append_behindHead(3);
    // append_behindHead(4);
    // append_behindHead(5);
    // append_behindHead(6);
    // append_behindHead(7);
    // append_behindHead(8);
    // append_behindHead(9);

    // Display the linked list
    node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->c);
        current = current->next;
    }

    return 0;
}
