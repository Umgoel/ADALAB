#include<stdio.h>

void TOH(int n, char s, char a, char d){
    if(n==1){
        printf("\nMove disk 1 from peg %c to peg %c",s,d);
    return;
    }
    TOH(n-1,s,d,a);
    printf("\nMove disks %d from peg %c to peg %c",n,s,d);
    TOH(n-1,a,s,d);
}

void main(){
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    TOH(num,'s','a','d');
}
