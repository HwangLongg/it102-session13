#include <stdio.h>
int main (){
    int n , a ,b,c ;
    scanf ("%d",&a);
    scanf ("%d",&b);
    while (1) {
        int c =1 ;
        a % b = c;
        if ( a % b == 0){
            b = n ;
            printf ("ucln cua a va b la %d ",n);
            return 0 ;
        }
        b % c = a;
        if (b % c == 0){
            c = n ;
            printf ("ucln cua a va b la %d ",n);
            return 0 ;
        }
        c % a = b;
        if (c % a == 0){
            a = n ;
            return 0 ;
        }
    }
    return 0;
}