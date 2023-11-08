/*Write a program that fills a 5 by 5 matrix (2D array) as follows :— upper triangle
with1 ; diagonal with 0 ; lower triangle with 2*/

#include<stdio.h>
int main(){
    int arr[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                arr[i][j] = 0;
            } else if (i < j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 2;
            }
        }
    }

    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}