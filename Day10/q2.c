#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    //Upper Pyramid
    for (int i = 0; i<n; i++)
    {
        //Character 1
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 1
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Pre Space 2
        for (int j = 0; j<n-i-1; j++)
            printf(" ");
        //Character 2
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 2
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Pre Space 3
        for (int j = 0; j<n-i-1; j++)
            printf(" ");
        //Character 3
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 3
        for (int j = 0; j<n-i; j++)
            printf(" ");      
        printf("\n");
    }
    //Lower Pyramid
    for (int i=n-2; i>=0; i--)
    {  
        //Character 1
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 1
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Pre Space 2
        for (int j = 0; j<n-i-1; j++)
            printf(" ");
        //Character 2
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 2
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Pre Space 3
        for (int j = 0; j<n-i-1; j++)
            printf(" ");
        //Character 3
        for (int j = 0; j<2*i+1; j++)
            printf("%d", i+1);
        //Post Space 3
        for (int j = 0; j<n-i; j++)
            printf(" ");      
        printf("\n");
    }
    
}