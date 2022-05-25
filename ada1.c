#include<stdio.h>
int gcd(int m, int n){
int r;
if(n==0)
    return m;
else{
while(n!=0){
r = m%n;
m = n;
n = r;
}
return m;
}
}
int main(){
    printf("gcd = %d",gcd(0,4));
return 0;
}



/*  recursion
if(n!=0){
r = m%n;
]
return gcd(n,r);
}


*/
