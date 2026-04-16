// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;

// };
// void printLinklist(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }

// int main(){
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;

//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));

//     head -> data=11;
//     head -> next=second;
//     second -> data=54;
//     second -> next=third;
//     third -> data=976;
//     third -> next=NULL;
//     printLinklist(head);
    


// }



//INSERTION IN LINKLIST
//AT THE BIGNNING

// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;

// };
// void printLinklist(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// struct Node* insertFirstElement(struct Node* head,int data){
//    struct Node* newElement=(struct Node*)malloc(sizeof(struct Node));
//     newElement -> next=head;
//     newElement -> data=data;
//     return newElement;
// }

// int main(){
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;

//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));

//     head -> data=11;
//     head -> next=second;
//     second -> data=54;
//     second -> next=third;
//     third -> data=976;
//     third -> next=NULL;
   
//    head= insertFirstElement(head,15);
//      printLinklist(head);
     
    


// }


#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* insertion(struct Node* head){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=33;
    newNode->next=head;
    return newNode;
}
void printll(struct Node* ptr){
    while(ptr!=NULL){
        printf("VALUE =%d\n",ptr->data);
        ptr=ptr->next;
    }
  

}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head -> data =10;
    head -> next=second;
    second ->data=20;
    second->next=third;
    third-> data=30;
    third -> next=NULL;
    head=insertion(head);
    printll(head);


}
