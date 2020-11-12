#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int matris[n][n];
//COZUM BASLANGIC
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<n-1)
                matris[i][j]=2;
            else if(i+j == n-1)
                matris[i][j] = 1;
            else
                matris[i][j] = 3;
        }
    }

    printf("\n");

//COZUM BITIS
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",matris[i][j]);
        printf("\n");
    }
    return 0;
}
