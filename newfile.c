#include <stdio.h>
int main( ){
    int num = 80000;
    int withdraw;
    int balance;
    printf("Enter amount:");
    scanf("%d", &withdraw);
    balance = (num-withdraw);
    printf("your balance is: %d", balance);
    return 0;
}
    
    

	
