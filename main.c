#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n==0)
       return 0;
    else
        return n%10 + sum(n/10);

}

int main(void)
{
    int num;

    printf("Bir sayi giriniz: ");
    scanf("%d", &num);

    printf("Toplam = %d", sum(num));

    return 0;
}
