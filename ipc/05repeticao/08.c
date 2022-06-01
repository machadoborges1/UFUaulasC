#include <stdio.h>

int main(){

    int n, k=0, c=0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        c++;
        printf("\n");
        for (int j = 0; j < c ; j++){
            k++;
            printf("%d ", k);
        }
    }
    return 0;
}