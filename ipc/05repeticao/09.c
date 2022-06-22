#include <stdio.h>

int main(){

    int n; 
    scanf("%d", &n);

    if( n%2 == 0)
        for(int i = n; i > 0; i--)
            if( n%i == 0) printf("%d ", i);
        
    return 0;
}