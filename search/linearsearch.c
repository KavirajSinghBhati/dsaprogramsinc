/*
a linear search or sequential search is a method for finding an element within a list. 
It sequentially checks each element of the list until a match is found or the whole list 
has been searched.
It has time complexity of O(n).
____________________
|1|5|8|9|0|10|11|12|  -----> search(9)
                                |
                                |
___________________        
|1|5|8|9|0|10|11|12|
 |_______________________is i==9 false next element i=1
   |_____________________is i==9 false next element i=5
     |___________________is i==9 false next element i=8
        |________________is i==9 true return found and break the loop i=9
So it is searching the whole array linearly.
*/

#include<stdio.h>
#include<stdlib.h>

//function for initialising our array
int* createArray(int n){
    int *arr = (int*)malloc(n*sizeof(int));
    int i;

    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",(arr+i));
    }
    
    return arr;
}


//searching for the element
void linearSearch(int item,int *arr,int n){

     int i;
     for (i = 0; i < n; i++)
     {
         
         if(*(arr+i)==item){
             printf("\nelement found at:%d position",i);
             break;
         }
     }
     
}

//function to print our array
void displayArray(int *a,int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
}

//main function
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int *arr = createArray();

    
    printf("\n The array is:");
    displayArray(arr,n);

    int element;

    printf("\n Enter the element to search:");
    scanf("%d",&element);

    linearSearch(element,arr,n);
    return 0;
}
