
/*
   Program to implement stack.
   Input:stack elements
   Output:push or pop operation
   Date:5/10/2012
*/

#include<stdio.h>
#define max_size 40

void push();
void pop();
void display();

int stack_arr[max_size];
int top=-1;

void main() {

    int choice;

    while(1) { 


        printf("\n\t\t MENU ");
        printf("\n1. PUSH ");
        printf("\n2. POP ");
        printf("\n3. DISPLAY ");
        printf("\n4. QUIT ");

        printf("\nEnter your choice: ");
        fflush(stdin);
        scanf("%d",&choice);

        switch(choice) {

            case 1: {
                        push();
                        display();
                        break;
                    }

            case 2: {
                        pop();
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
        }
    }

}


void push() {

    int item;

    if(top==(max_size-1)) {
        printf("\nStack is full!!!");
    }

    else {
        printf("\nEnter the elements to be inserted: ");
        scanf("%d",&item);
        top=top+1;
        stack_arr[top]=item;
    }
}

void pop() {

    int item;

    if(top==-1) {
        printf("Stack is empty!!!");
    }

    else {

        item=stack_arr[top];
        printf("Popped element is :%d",stack_arr[top]);
        top=top-1;
    }
}

void display() {
    int i;

    if(top==-1) {
        printf("Stack is empty!!!");
    }

    else {

        printf("\n The stack elements are: ");

        for(i=top;i>=0;i--) {
            printf("%d\n",stack_arr[i]);
        }

    }
}


