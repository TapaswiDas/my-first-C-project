#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char ans[10]="yes";
    while (strcmp(ans,"yes")==0){
        double num1;
        printf("please enteer first number:");
        scanf("%lf",&num1);
        double num2;
        printf("please enter second number:");
        scanf("%lf",&num2);
        
        
        printf("The available choices are:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        
        char choice[100];
        while (getchar() !='\n');
          printf("please specify a choice:\n");
          fgets(choice,100,stdin);
          choice[strcspn(choice,"\n")]='\0';
        if (strcmp(choice,"Addition")==0){
            printf("The sum of the two numbers is %lf\n",num1+num2);
        }
        else if (strcmp(choice,"Subtraction")==0){
            printf("The diff of the two numbers is %lf\n",num1-num2);
        }
        else if (strcmp(choice,"Multiplication")==0){
            printf("The product of the two numbers is %lf\n",num1*num2);
        }
        else if (strcmp(choice,"Division")==0){
            printf("The division of the two numbers is %lf\n",num1/num2);
        }
        printf("would you like to run the calculator once again?\n");
        fgets(ans,10,stdin);
        ans[strcspn(ans,"\n")]='\0';
    }
    printf("Thank you for using the calculator");
    return 0;
}
