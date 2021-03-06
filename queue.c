/*
   Program to implement queue
   Input:Elements of queue
   Output:Enqueue & dequeue operation
   Date:6/10/2012
*/

#include<stdio.h>
#define max_size 40

void insert();
void delete();
void display();

int queue_arr[max_size];
int front=-1;
int rear=-1;

void main() {

    int choice;

    while(1) { 


        printf("\n\t\t MENU ");
        printf("\n1. INSERT ");
        printf("\n2. DELETE ");
        printf("\n3. DISPLAY ");
        printf("\n4. QUIT ");
        printf("\nEnter your choice: ");
        fflush(stdin);
        scanf("%d",&choice);

        switch(choice) {

            case 1: {
                        insert();
                        display();
                        break;
                    }

            case 2: {
                        delete();
                        break;
                    }

            case 3: { 
                        display();
                        break;
                    }

            case 4: {
                        exit(1);
                        break;
                    }

            default: printf("\nYou Entered Wrong Choice");
                     break;
        }
    } 

}


void insert() {

    int item;

    if(rear == (max_size-1) ) {
        printf("\nQueue is full!!!");
    }

    else {

        if(front == -1) {
            front=0;
        }

        printf("\nEnter the elements to be inserted: ");
        scanf("%d",&item);
        rear=rear+1;
        queue_arr[rear]=item;

    }
}

void delete() {

    int item,i;

    if((front == -1)||(front>rear)) {
        printf("Queue is empty!!!");
    }

    else {

        item=queue_arr[front];
        printf("Element deleted :%d",queue_arr[front]);
        front=front+1;
    }
}

void display() {

    int i;

    if(front==-1) {
        printf("Queue is empty!!!");
    }

    else {

        printf("\n The queue elements are: ");

        for(i=front;i<=rear;i++ ) {
            printf("%d\n",queue_arr[i]);
        }

    }
}

