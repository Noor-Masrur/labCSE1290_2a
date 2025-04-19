#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "sendmoney.h"

int main()
{
    int currentBalance = 10000;

    if(login())
    {
        printf("Login successful.\n");
        while(1)
        {

            
            printf("Option 1 : Send Money\n");
            printf("Option 2 : Cash In\n");
            printf("Option 3 : Cash Out\n");
            printf("Option 4 : Payment\n");
            printf("Option 5 : Exit\n");

            int option;
            printf("\nEnter option no : ");
            scanf("%d",&option);


            if(option == 1)
            {
                printf("You have chosen send money.\n");
                printf("Enter amount : ");

                int amount;
                scanf("%d", &amount);

                currentBalance = sendMoney(currentBalance, amount);


                printf("Send money successful. Your current balance is : %d\n",currentBalance);

            }

            if(option == 2)
            {
                printf("You have chosen cash in\n");

                int amount;
                scanf("%d", &amount);

                currentBalance += amount;

                printf("Cash in successful. Your current balance is : %d\n",currentBalance);


            }

            if(option == 3)
            {
                printf("You have chosen cash out\n");
            }

            if(option == 4)
            {
                printf("You have chosen payment\n");
            }

            if(option == 5)
            {
                break;
            }
        }

    }

    else
    {
        printf("Invalid credentials.\n");
    }


}
