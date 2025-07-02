#include<stdio.h>
int main(){
    char line[1000];
    printf("Enter one line info about you:\n");
    scanf("%[^\n]1000s", line);
    printf("You entered: %s\n", line);
}