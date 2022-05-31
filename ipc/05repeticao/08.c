#include <stdio.h>

int main(){

    int n, k=0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        printf("\n");
        for (int j = n; j > 0 ; j--){

            ++k;
            printf("%d ", k);
        }

    return 0;
}