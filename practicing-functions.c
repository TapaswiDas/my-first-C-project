#include <stdio.h>
#include <stdbool.h>
void even_odd(int num1){
    if (num1%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
    
int main() {
    int input;
    scanf("%d",&input);
    even_odd(input);
    return 0;
}
