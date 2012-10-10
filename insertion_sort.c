/*
   Program to implementinsertion sort.
   Input:Unsorted array elements
   Output:Sorted elements
   Date:5/10/2012
*/

#include<stdio.h>

void main() {

    int i,j,limit,temp,arr[20];

    printf("\nEnter size of the array: ");
    scanf("%d",&limit);

    printf("\nEnter elements in to the array: ");
    for(i=0;i<limit;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<limit;i++) {

        temp=arr[i];
        j=i-1;

        while((temp<arr[j])&&(j>=0)) {

            arr[j+1]=arr[j];
            j=j-1;

        }

        arr[j+1]=temp;
    }

    printf("\nAfter sorting the elements are: ");

    for(i=0;i<limit;i++) {
        printf(" %d\t",arr[i]);
    }
}



