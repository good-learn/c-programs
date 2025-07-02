#include<stdio.h>
int main(){
    int val, maxv, minv;
    int flag=1;
    /*to enter end of line in terminal linux use ctrl + D*/
    while (scanf("%d", &val) != EOF) {
        if (flag || maxv<val)  maxv=val;
        if (flag || minv>val)  minv=val;
        flag=0;
    }
    printf("Max value is: %d\n", maxv);
    printf("Min value is: %d\n", minv);


}