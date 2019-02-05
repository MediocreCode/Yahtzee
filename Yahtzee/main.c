//
//  main.c
//
//  Created by Raleigh Dial
//  Copyright © 2019 Raleigh Dial. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dice5;
    int rollCount=1;
    char input;
    printf("Welcome to Yahtzee!!\nYou have 3 rolls to try and get 5 of a kind\n\n");
    printf("Here we go - roll %d!\n",rollCount);
    dice1= rand()%6+1;
    dice2= rand()%6+1;
    dice3= rand()%6+1;
    dice4= rand()%6+1;
    dice5= rand()%6+1;
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Die 3: %d\n",dice3);
    printf("Die 4: %d\n",dice4);
    printf("Die 5: %d\n",dice5);
    if (dice1==dice2 && dice2==dice3 && dice3==dice4 && dice4==dice5) {
        printf("***********\nYAHTZEE!!!!\n***********\n");
    }else{
    printf("Please answer the following (y or n)\n");
    printf("Would you like to reroll die 1?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice1= rand()%6+1;
    }
    printf("Would you like to reroll die 2?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice2= rand()%6+1;
    }
    printf("Would you like to reroll die 3?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice3= rand()%6+1;
    }
    printf("Would you like to reroll die 4?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice4= rand()%6+1;
    }
    printf("Would you like to reroll die 5?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice5= rand()%6+1;
    }
    rollCount++;
    printf("Here we go - roll %d!\n",rollCount);
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Die 3: %d\n",dice3);
    printf("Die 4: %d\n",dice4);
    printf("Die 5: %d\n",dice5);
    if (dice1==dice2 && dice2==dice3 && dice3==dice4 && dice4==dice5) {
        printf("***********\nYAHTZEE!!!!\n***********\n");
    }else{
    printf("Please answer the following (y or n)\n");
    printf("Would you like to reroll die 1?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice1= rand()%6+1;
    }
    printf("Would you like to reroll die 2?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice2= rand()%6+1;
    }
    printf("Would you like to reroll die 3?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice3= rand()%6+1;
    }
    printf("Would you like to reroll die 4?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice4= rand()%6+1;
    }
    printf("Would you like to reroll die 5?:\n");
    scanf(" %c",&input);
    if (input=='y'){
        dice5= rand()%6+1;
    }
    rollCount++;
    printf("Here we go - roll %d!\n",rollCount);
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Die 3: %d\n",dice3);
    printf("Die 4: %d\n",dice4);
    printf("Die 5: %d\n",dice5);
    if (dice1==dice2 && dice2==dice3 && dice3==dice4 && dice4==dice5) {
        printf("***********\nYAHTZEE!!!!\n***********\n");
    }else{
        printf("Sorry - Better luck next time!\n");
    }
    }
    }
    return 0;
}


