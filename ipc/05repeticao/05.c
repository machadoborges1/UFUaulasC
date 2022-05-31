#include <stdio.h>

int main(){

    int n, v1 = 0, v2=1, fibo;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("%d ", v1);
        fibo = v1 + v2;
        v1 = v2;
        v2 = fibo;

    }

    return 0;
}