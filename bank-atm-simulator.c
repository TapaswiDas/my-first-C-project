#include <stdio.h>
#include <string.h>

int main() {
    double balance=1000;
    char ans[10]="yes";
    while (strcmp(ans,"yes")==0){
        
        printf("your current balance is %lf\n",balance);
        printf("welcome to ATM:\n");
        printf("Your Available Choices Are:\n");
        printf("1. check balance\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        
        char choice[100];
        printf("please enter your choice:\n");
        fgets(choice,100,stdin);
        choice[strcspn(choice,"\n")]='\0';
        if (strcmp(choice,"check balance")==0){
            printf("your current balance is %lf\n",balance);
        }
        
        else if (strcmp(choice,"deposit money")==0){
            double deposit;
            printf("enter the amount to be deposited\n");
            scanf("%lf",&deposit);
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            balance=balance+deposit;
            printf("Amount deposited! your new balance is %lf\n",balance);
        }
        
        else if (strcmp(choice,"withdraw money")==0){
            double withdraw;
            printf("Enter the amount to be withdrawn\n");
            scanf("%lf",&withdraw);
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            if (withdraw>balance){
                printf("ERROR! you cannot withdraw amount more than you have in bank account\n");
            }
            else {
                balance=balance-withdraw;
                printf("Amount withdrawn! your new balance is %lf\n",balance);
            }
        }
        else if (strcmp(choice,"exit")==0){
            break;
        }
        printf("would you like to run the ATM once again?\n");
        fgets(ans,10,stdin);
        ans[strcspn(ans,"\n")]='\0';
    }
    printf("Thank you for using our services!");

    return 0;
}
