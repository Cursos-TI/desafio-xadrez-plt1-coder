#include <stdio.h>
int main(){
int r = 0;


// TORRE 5 CASAS PARA A DIREITA
printf("TORRE:\n");
for(int i = 0; i <= 5; i++)
{
    printf("Direita\n"); // Direçao
}


// BISPO 5 CASAS DIAGONAL
printf("BISPO:\n");
for(int b = 0; b <= 5; b++)
{
    printf("Cima Direita\n"); // Direçao
}

// RAINHA 8 CASAS
printf("RAINHA:\n");
while (r <= 8)
{
    printf("Cima\n", r);
    r++;
}

return 0;
}