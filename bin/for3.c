#include <stdio.h>
int main() {
    int num;
    int qtd =0;
    for (num=1930; num <=2024;num++){
        if (num % 4 == 0){
            printf("%d\n",num);
            qtd++;
        }
    }
    
printf("\n-----------------\n");
printf("a quantidade de anos bissexto é %d\n", qtd);

    return 0;
}
