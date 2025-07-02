#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char line[1000];
    int i;
    FILE *hand;
    hand = fopen("romeo.txt", "r");

    while(fgets(line, 1000, hand)!= NULL){
        for(i=0;i<strlen(line);i++)
            putchar(toupper(line[i]));
    }
}