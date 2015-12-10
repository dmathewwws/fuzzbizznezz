//
//  main.c
//  FuzzBizzNezz
//
//  Created by Rafael on 2015-12-08.
//  Copyright (c) 2015 BizWarlockAppz. All rights reserved.

/* Assignment 2: FuzzBizzNezz
 Write a program that takes three integer inputs: "Fuzz", "Bizz", and "Nezz".
 
 Print numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", print "Fuzz" instead of the number and for the multiples of "Bizz", print "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz" */

#include <stdio.h>

//create function
void fuzzBizzNezz(int f, int b, int n) {
    int i;
    for(i=1; i <=n; i++){
        
        if(i == n) {
            printf("Nezz\n");
        }
        
        else if(i%f == 0 && i%b == 0) {
        printf("FuzzBizz\n");
        }
        
        else if(i%f == 0) {
            
        printf("Fuzz\n");
        }
        
        else if(i%b == 0) {
            
        printf("Bizz\n");
        }
        
        else{
        printf("%d\n", i);
        }
    }
}


int main(int argc, const char * argv[]) {
    
    //declare the three integers that are going to be used
    int fuzz;
    int bizz;
    int nezz;
    
    //Ask user to input 3 numbers(integers) in ascending order.
    printf("Hello! Do you want to play a game? You will need to enter 3 numbers in ascending order. They are gonna be called Fuzz, Bizz and Nezz\n\n");
    printf("Press ENTER to start\n");
    getchar();
    
    
    printf("Please enter a number for Fuzz(lowest):\n");

    //scanf stores value that user inputs, & in the parameter has to be used so function will know the address of the var and get its value
    scanf("%d", &fuzz);
    printf("Great! Your Fuzz number is %d\n\n", fuzz);
    
    
    printf("Now, please enter a number for Bizz:\n");
    scanf("%d", &bizz);
    
    //error appears if user doesn't follow the ascending order
    if (bizz <= fuzz) {
        printf("Oops, sorry but we need a number for Bizz that is higher than the number for Fuzz.\n\n");
        printf("Try again, please enter a bigger number for Bizz:\n");
        scanf("%d", &bizz);
    }
    
    //when bizz > fuzz
    printf("Good job! Your Bizz number is %d\n\n", bizz);
    
    //last input asked
    printf("Now, last but not least, enter the highest number of all for Nezz:\n");
    
    scanf("%d", &nezz);
    printf("Well done! Your Nezz number is %d\n", nezz);
    
    //call function from outside main function
    fuzzBizzNezz(fuzz, bizz, nezz);
}