#include<stdio.h>
int main(){
    char line[1000];
    printf("Enter a line\n");
    fgets(line, 1000, stdin);
    printf("Line: %s", line);

}