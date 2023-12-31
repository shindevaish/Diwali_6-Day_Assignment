/*WAP to print the following pattern

      A 
    B C B 
  C D E D C 
D E F G F E D*/

#include <stdio.h>

int main() {
    int row;

    printf("Enter number of rows:");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++) {
        char ch = 'A' + i - 1;

        for (int j = 1; j <= row - i; j++) {
            printf("  ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        ch -= 2; 
        for (int j = 1; j <= i - 1; j++) {
            printf("%c ", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}
