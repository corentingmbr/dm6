#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char choice;
    float sum=100;
    float bet;

    while (1) {
        printf("MENU :\n");
        printf("1. Bet\n");
        printf("2. Substract\n");
        scanf(" %c",&choice);

        if (choice=='1') {
            printf("How many do you wanna bet ? :\n");
            scanf("%f",&bet);
            int number=rand() %2 ;

            if (bet > sum) {
                printf("You can't bet what you don't have bro.\n");
            }

            else if (number == 0 ) {
                sum -= bet;
                printf("Looser !\n");

            } else {
                sum += bet;
                printf("Well done ! You doubled your cash.\n");
            }
            printf("Your cash : %.2f dollar\n",sum);


        } else if (choice=='2') {
            printf("You leave with %.2f dollar.\n",sum);
            return 0;


        } else {
            printf("Error, your choice isn't valid.\n");
            return 1;
        }
    }
}