#include <stdio.h>
int main()
{
    int choice;
    float deposit,withdraw;
    float BALANCE = 10000.00;
    do
    {
        printf("Menu:\n1 - Balance\n2 - Deposit\n3 - Withdraw\n0 - Exit\nEnter your choice: ");
        scanf(" %d",&choice);
        if (choice == 1)
        {
            printf("Your available balance: %.2f\n",BALANCE);
        }else if (choice == 2)
        {
            printf("Enter the deposit amount: ");
            scanf(" %f",&deposit);
            if (deposit <=0)
            {
                printf("The minimum deposit amount must be more than zero!!!\n");
            }else 
            {
                BALANCE += deposit;
            }
        }else if (choice == 3)
        {
            printf("Enter the withdrawn amount: ");
            scanf(" %f",&withdraw);
            if (withdraw > BALANCE )
            {
                printf("Exceeds withdrawal amount limits!!!\n");
            }else if(withdraw > 0)
            {
                BALANCE -= withdraw;
            }else 
            {
                printf("The minimum Withdrawn amount must be more than zero!!!\n");
            }
        }else if (choice == 0)
        {
            printf("Exiting...\n");
        }else
        {
            printf("Invalid choice. Please try again.\n");
        }
        printf("------------------------------------\n");
    }while(choice != 0);
return 0;
}
