
#include <stdio.h>

void ccoin(){
    int coin, coin_list[100], use_these[100], i, amount;
	printf("Enter number of Coin : ");
	scanf("%d", &coin);
	printf("\nEnter the coin in descending order: ");
	for(i=0; i< coin; i++) {
		scanf("%d", &coin_list[i]);
	}
	printf("\nEnter the amount  : ");
	scanf("%d", &amount);

	for(i=0; i < coin; i++) {
		use_these[i] = amount / coin_list[i];
		amount %= coin_list[i];
	}
	printf("\nSolution: \n");
	for(i=0; i < coin; i++) {
		printf("%dx%d ", coin_list[i], use_these[i]);
	}
}


int main () {
	ccoin();
}
