/*Write a program to print following pattern
* * * *
* * *
* *
*
*/

#include<stdio.h>
int main(){
    int row;

    printf("Enter number of row:");
    scanf("%d",&row);

    for (int i=row;i>-1;i--){
        for (int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}