#include <stdio.h>
int main (int n,m){
    for (int i = 0 ; i < n; i++){
        for (j = 0;j <m;j++){
            scanf ("%d",&arr[i][j]);
        }
    }

}
int main2 (int n, m){
    for (int i = 0 ; i < n ;i++){
        for ( int j = 0 ; j < m ;j++){
            printf ("%d\t",arr[i][j]);
        }
        printf ("\n");
        }
}
int main3 (int n , m){
    printf ("tren trai %d ",arr[0][0]);
        printf ("tren phai %d ",arr[0][n-1]);
        printf ("duoi trai %d ",arr[m-1][0]);
        printf ("duoi phai %d ",arr[m-1][n-1]);
}
int main5 (int n,m){
    for (i = 0 ; i<n ;i++){
        for (j = 0;j<m;j++){
            if (i = j){
                printf ("duong cheo chinh %d ",arr[i][j]);
            }
        }
    }

}
int main6 (int n , m){
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            if (arr[i][j]>0){
                printf ("%d la so nguyen to ",arr[i][j]);
            }
        }
    }
}do {
    scanf ("%d",&c);
    scanf ("%d",&d);
    scanf ("%d",&a);
    switch (a) {
        case 1 :
        main (c,d);
        break ;
        case 2 :
        main2 (c,d);
        break;
        case 3 :
        main3 (c,d);
        break ;
        case 5 :
        main5 (c,d);
        break;
        case 6 :
        main6 (c,d);
        break ;
        default :
        int k =2
        break ;
    }
}while(k==2);
