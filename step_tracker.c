#include <stdio.h>

void instructions() {
    printf("=====================================================\n");
    printf("             FITNESS TRACKING APP                   \n ");
    printf("                   WELCOME                           \n");
    printf("1. please input your amount of steps in the last 5 days\n");
    printf("2. The first data should be of the most recent day, i.e. yesterday\n~");
}

int main(){
    instructions();
    int daily[5];
    int active=0;
    float avg;
    for (int i=0; i<5; i++){
        printf("Please enter the amount of steps:\n");
        scanf("%d",&daily[i]);
    }

    int sum=0;
    for (int j=0; j<5; j++){
        sum += daily[j];

    }
    avg= sum/5.0;
    printf("your daily average step is %lf\n",avg);

    for (int k=0; k<5; k++){
        if (daily[k]>8000){
            active +=1;
        }
    }
    printf("The number of active days is %d\n",active);

    return 0;
}
