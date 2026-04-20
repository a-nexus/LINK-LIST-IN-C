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


// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;
// };

// void printll(struct Node* ptr){
//     struct Node* lastNode=(struct Node*)malloc(sizeof(struct Node));
//     lastNode->data=54;
//    while(1){
//     if(ptr==NULL){
//         ptr->next=lastNode;
//         printf("%d\n",ptr->data);
//     }else{
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
//    }
  

// }
// int main(){
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;
//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));
//     head -> data =10;
//     head -> next=second;
//     second ->data=20;
//     second->next=third;
//     third-> data=30;
//     third -> next=NULL;
    
//     printll(head);


// }


// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* insertAtPosition(struct Node* head,int value,int index){
//     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
//     int i=1;
//     struct Node* temp=head;
//     while(i!=index-1){
//         temp=temp->next;
//         i++;
//     }
//     ptr->data=value;
//     ptr->next=temp->next;
//     temp->next=ptr;
//     return head;
// }
// void printLL(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main(){
//     struct Node* head=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* second=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* third=(struct Node*)malloc(sizeof(struct Node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=40;
//     third->next=NULL;    
//     int index,value;
//     printf("ENTER THE INDEX WHERE YOU ANT TO ADD THE NODE:");
//     scanf("%d",&index);
//     printf("ENTER THE VALUE:");
//     scanf("%d",&value);
//     head=insertAtPosition(head,value,index);
//     printLL(head);
//     return 0;
// }


//INSERTION AT A SPECIT=FIC PLACE

// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;

// };
// struct Node* insertAtLast(struct Node* head){
//     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    
//     struct Node* temp=head;
    
//     while(temp->next!=NULL){
//         temp=temp->next;
        
//     }
//     ptr->data=20;
//     ptr->next=NULL;
//     temp->next=ptr;
//     return head;
// }
// void printLL(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;


//     }

// }
// int main(){
//     struct Node* head=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* second=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* third=(struct Node*)malloc(sizeof(struct Node));
//     head->data=20;
//     head->next=second;
//     second->data=30;
//     second->next=third;
//     third->data=40;
//     third->next=NULL;
//     head=insertAtLast(head);
//     printLL(head);
//     return 0;
// }

//THEN WE WILL TALK ABOUT THE DELETION OKAY BRO 

// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* deletionAtEnd(struct Node* head){
//     head=head->next;
//     return head;
// }
// void printLL(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main(){
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;
//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc (sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=NULL;
//    head= deletionAtEnd(head);
//     printLL(head);
//     return 0;

// }

//DELETION AT A SPECIFIC PLACE

// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* atSpecificPlace(struct Node* head,int index){
//     struct Node* temp=head->next;
//     struct Node* prev=head;
//     int i=1;
//     for(i;i<index-1;i++){
//         temp=temp->next;
//         prev=prev->next;
//     }

   
//     prev->next=temp->next;
//     free(temp);
    
//     return head;
// }
// void printLL(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main(){
//     struct Node* head=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* second=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* third=(struct Node*)malloc(sizeof(struct Node));
//     struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
//     head->data=20;
//     head->next=second;
//     second->data=30;
//     second->next=third;
//     third->data=40;
//     third ->next=fourth;
//     fourth->data=50;
//     fourth->next=NULL;
//     head = atSpecificPlace(head,3);
//     printLL(head);
//     return 0;

// }


// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* deleteAtLast(struct Node* head){
//     struct Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;

//     }
//     temp->next=NULL;
   
//     return head;
// }
// void printLL(struct Node* ptr){
//     while (ptr!=NULL)
//     {
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
    
// }
// int main(){
//        struct Node* head=(struct Node*)malloc(sizeof(struct Node));
//   struct Node* second=(struct Node*)malloc(sizeof(struct Node));
//  struct Node* third=(struct Node*)malloc(sizeof(struct Node));
//    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
//     head->data=20;
//     head->next=second;
//    second->data=30;
//   second->next=third;
//     third->data=40;
//   third ->next=fourth;
//    fourth->data=50;
//    fourth->next=NULL;
//      head = deleteAtLast(head);
//      printLL(head);
//      return 0;

// }

// #include <stdio.h>
//  #include <stdlib.h>
//  struct Node{
//     int data;
//     struct Node* next;

//  };
//  void printLL(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
//  }
 
//  int main(){
//     struct Node* head=NULL,*temp=NULL,*newNode;
//     int num;
//     printf("ENTER THE NUMBER OF NODES:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         newNode=(struct Node*)malloc(sizeof(struct Node));
//         printf("ENTER THE %d NODE VALUE:",i);
//         scanf("%d",&newNode->data);
//         newNode->next=NULL;
//         if(head==NULL){
//             head=newNode;
//             temp=head;

//         }else{
//             temp->next=newNode;
//             temp=newNode;
            
//         }
//     }
//     printLL(head);
//     return 0;
      
//  }

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* insertAtBignning(struct Node* head,int value){
    struct Node* atBignning=(struct Node*)malloc(sizeof(struct Node));
    atBignning->data=value;
    atBignning->next=head;
    head=atBignning;
    return head;

}
void printLL(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node* head=NULL,*temp=NULL,*newNode;
    int node;
    printf("ENTER THE NUMBER IF NODES:");
    scanf("%d",&node);
    for(int i=0;i<node;i++){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        printf("ENTER THE VALUE OF %d NODE:",i+1);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    int val;
    printf("ENTER THE VALUE WHICH YOU WANT TO ADD AT THE BIGNNING:");
    scanf("%d",&val);
    head=insertAtBignning(head,val);
    printLL(head);
}
