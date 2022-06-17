
#include <stdio.h>

int main()
{
    int icecream_price = 950;
    int pocket_money = 1000;
    printf("Do I have money to buy an icecream? %d \n", icecream_price < pocket_money);
    printf("Do I have money to buy two icecreams? %d \n", 2*icecream_price < pocket_money);
    printf("Yeah");
    return 0;
}