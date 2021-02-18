#include <stdio.h>

int josephus (int n, int m){
    int f;

    if(n==1)
    {
        return 1;
    }
    else
    {
        printf("%d morreu\n", n);
        f = (m - 1 + josephus(n-1, m)) % n + 1;
        return f;
    }
}

int main (){
    int n, m;
    
    printf("N = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    printf("Sobrevivente: %d", josephus(n, m));
}