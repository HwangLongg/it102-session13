#include <stdio.h>
int main (){
    int n,m ;
    printf ("moi nhap vao so hang va cot ");
    scanf ("%d",&n);
    scanf ("%d",&m);
    int arr[n][m];
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m; j++){
            printf ("moi nhap vao so arr[%d][%d]",i,j);
            scanf ("%d\n",&arr[i][j]);
            printf ("%d\n",arr[i][j]);
        }
        printf ("\n");
    }
}