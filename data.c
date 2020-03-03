#include<stdio.h>
void main(){
    // Array declaration by specifying size and type
    int arr1[10];
    
    // declare an array of user specified size
    int n = 10;
    int arr2[n];

    // Array declaration by initializing elements.
    int arr[] = {10, 20, 30, 40 ,50};
    
    // Array declaration by specifying size and initializing
    int arr[6] = {10, 20, 30, 40}; // {10, 20, 30, 40 0, 0}
}
// ################ declaration of elements
#include<stdio.h>
int  main(){
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
    arr[3 / 2] = 2; // this is same as arr[1] = 2
    arr[3] = arr[0];
    
    printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
    
    return 0;
}
