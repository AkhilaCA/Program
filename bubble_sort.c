
/*
   Program to implement bubble sort.
   Input:unsorted elements
   Output:sorted element
   Date:5/10/12

*/


#include <stdio.h>


void main( ) {

    int arr[20],limit; 
    int i, j, temp ;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    printf("Enter the elements: ");
    for ( i = 0 ; i < limit ; i++ ) {
        scanf("%d",&arr[i]);
    }

    for ( i = 0 ; i < limit ; i++ ) {
        for ( j = i+1 ; j <limit ; j++ ) {
            if ( arr[i] > arr[j] ) {

                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;

            }
        }
    }

    printf ( "\n\nArray after sorting:\n") ;

    for ( j = 0 ; j < limit ; j++ ) {
        printf ( "%d\t", arr[j] ) ;
    }
}
