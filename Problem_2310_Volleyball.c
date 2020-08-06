#include <stdio.h>

int main()
{
    int at_total = 0, block_total = 0, saq_total = 0, n;
    int at_bem = 0, block_bem = 0, saq_bem = 0;
    int x, y, z, x1, y1, z1;
    char name[20];
    double per_saq, per_at, per_block;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", name);
        scanf("%d %d %d", &x, &y, &z);
        scanf("%d %d %d", &x1, &y1, &z1);
        saq_total = saq_total + x;
        block_total = block_total + y;
        at_total = at_total + z;
        saq_bem = saq_bem + x1;
        block_bem = block_bem + y1;
        at_bem = at_bem + z1;
    }
    per_saq = (double) (saq_bem*100)/saq_total;
    per_block = (double) (block_bem*100)/block_total;
    per_at = (double) (at_bem*100)/at_total;
    printf("Pontos de Saque: %.2lf %%.\n", per_saq);
    printf("Pontos de Bloqueio: %.2lf %%.\n", per_block);
    printf("Pontos de Ataque: %.2lf %%.\n", per_at);
    return 0;
}
