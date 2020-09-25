#include<stdio.h>

main(){

    int sum=0, x=100, j=0, t;
    int i = 0;

    //1. initialization/start = 10
    //2. condition/end = 5
    //3. increment/decrement
    t = 20 + i;
    i=t;
    //while loop
    while(i<=20){
        sum += i; // sum = sum + i;
        i++;
    }

    printf("Sum: %d", sum);

    //do-while loop
    i=t;
    do{
        sum += i; // sum = sum + i;
        i++;
    }while(i<=20);

    printf("\nSum: %d\n\n", sum);

    //Patterns
    for(j=5; j>=1; j--){

        for(i=0; i<j; i++)
            printf("*");

        printf("\n");
    }

}
/*
i   sum     j       x
--- ----    ---     --
11  11      0       100
12  23      1       99
13  36      2       98
14  50      3       97
*/
