#include <stdio.h>
int main(){
    int val;
    printf("Guess the number, enter your guess:\n");
    while (scanf("%d", &val)!=EOF){
        if (val==42) {
            printf("You got it right!!\n");
            break;
        }
        else if (val<42) printf("Your guess is low, try again!\n");
        else printf("Your guess is higher, try again!\n");
    }
}