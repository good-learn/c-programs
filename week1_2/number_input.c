#include<stdio.h>
int main(){
    int usf, euf;
    printf("Enter a US floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU floor is: %d\n", euf);
}