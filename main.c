/*
Isabella Piantoni <piantois@sheridan.desire2learn.com>
----------------------------------------------------------------------
 */

/* 
 * File:   main.c
 * Author: Isabella Piantoni <piantois@sheridan.desire2learn.com>
 *
 * Created on May 21, 2019, 10:04 AM
 */

#include <stdio.h>

//Tribonacci function
long tribonacci(int n) {
    
    if (n < 3) 
        return 0;
    if(n == 3)
        return 1;
    else
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}

int main() {

    //Take input of integer
    int x;
    printf("Please enter the integer number n>3:\n");
    scanf("%d", &x);
    
    //If the input is incorrect, the program will enter a loop to ask again.
    while (x <= 3) {
    printf("Incorrect value! Please try again.\n");
    scanf("%d", &x);
    }
    
    //Once correct number is received, the tribonacci number is calculated and the program exits.
    printf("\nTribonacci number T_%d is %ld\n", x, tribonacci(x));
    
    return (0);
}

