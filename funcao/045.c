// exemplo calculo do fatorial
#include <stdio.h>

int fatorial( int n){
    int i, f =1;
    for(i = 1; i<=n; i++)
        f = f * i;
    return f;
}

int main(){

    int i, n, f=1, x, y;
    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        f = f * i;
    }
    printf("%d ", f);

    scanf("%d", &x);
    y = fatorial(x);

    return 0;
}
