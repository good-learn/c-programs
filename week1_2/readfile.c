#include <stdio.h>
int main(){
    char line[1];
    FILE *hand;
    hand = fopen("romeo.txt", "r");
    while (fgets(line, 1, hand)!= NULL) {
        printf("%s", line);
    }
}