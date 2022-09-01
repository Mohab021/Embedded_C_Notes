#include <stdio.h>
#include <stdlib.h>

// a struct of node
typedef struct NODE {
    int data;
    struct NODE * next; // cannot be (node * next) as node is not defined yet
}node;
  
// This function prints contents of linked list starting from the given node
void print_list(node * n)
{
    if(n == NULL){
        printf("empty list\n");
        return;
    }
    while (n != NULL){
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

/* Given a reference (pointer to pointer) to the head of a list and 
   an int, inserts a new node on the front of the list. */
void push(node ** head_ref, int new_data)
{
    node * new_node = (node *) malloc(sizeof(node));
    new_node->data  = new_data;
    new_node->next = *head_ref; //point to the node that pointed by the head
    *head_ref = new_node;
}

/* appends a new node at the end  */
void append(node ** head_ref, int new_data)
{
    node * new_node = (node *) malloc(sizeof(node));
    node * last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    
    if (*head_ref == NULL) //empty list
    {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    // here last->NULL
    last->next = new_node;
    return;
}

/* Given a node prev_node, insert a new node after the given prev_node */
void insert_after(node * prev_node, int new_data)
{
    if (prev_node == NULL) //empty list or the last element of the list
    {
      printf("cannot insert at the end or while empty\n");
      return;
    }
    
    node * new_node = (node *) malloc(sizeof(node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

/* Given a reference (pointer to pointer) to the head of a
   list and a key, deletes the first occurrence of key in
   linked list */
void delk_node(node ** head_ref, int key){
    node * temp = *head_ref;
    node * prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        return;
    }
 
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL){ // If key was not present in linked list
        printf("%d is not found\n", key);
        return;
    }
    
    prev->next = temp->next; // Unlink the node from linked list
    free(temp); // Free memory
}

void delp_node(node ** head_ref, int position){
    node * temp = *head_ref;
    node * prev = *head_ref;
    
    for(int i = 0 ; i < position ; i++){
        if(temp == NULL && i == 0){ //head is null = empty list
            printf("empty list\n");
            return;
        }
        if(i == 0 && position == 1){
            *head_ref = temp->next;
            free(temp);
            return;
        }
        if(i == position - 1 && temp){
            prev->next = temp->next;
            free(temp);
            return;
        }
        else{
            if(temp == NULL){ printf("position is out of range\n"); break; }
            
            prev = temp;
            temp = temp->next;
        }
    }
}

int main()
{
    node * head = NULL;
    print_list(head);
    delk_node(&head, 100);
    delp_node(&head, 1);
    insert_after(head, 10);
    
    append(&head, 100);
    print_list(head);
    
    delk_node(&head, 50);
    delp_node(&head, 1);
    print_list(head);
    
    append(&head, 100);
    print_list(head);

    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    print_list(head);
    
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    print_list(head);
    
    delp_node(&head, 10);
    insert_after(head, 20);
    insert_after(head->next->next, 40);
    print_list(head);
    
    delk_node(&head, 20);
    delp_node(&head, 3);
    print_list(head);

    return 0;
}