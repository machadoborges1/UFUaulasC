#include <stdio.h>

int main(){

    float n = 1.0, s, s2;

    for(float i = 1.0; i <= 50; i++){

        s = n/i;
        printf("%f ", s);
        n += 2.0;

        s2 += s;
    }
    printf(" = %f", s2);

    return 0;
}