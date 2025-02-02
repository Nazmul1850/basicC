#include<stdio.h>

void positiveOrNegetive(int num){
    if(num >= 0) {
        printf("Number %d is Positive", num);
    }else {
        printf("Number %d is Negetive", num);
    }
}

void evenOrOdd(int num){
    if(num%2 == 0) {
        printf("The number %d is Even", num);
    }else {
        printf("The number %d is Odd", num);
    }
}
void displayDigit(int num){
    if(num == 0) {
        printf("zero");
    }else if(num == 1){
        printf("one");
    }else if(num == 2){
        printf("two");
    }else if(num == 3){
        printf("three");
    }else if(num == 4){
        printf("four");
    }else if(num == 5){
        printf("five");
    }else if(num == 6){
        printf("six");
    }else if(num == 7){
        printf("seven");
    }else if(num == 8){
        printf("eight");
    }else if(num == 9){
        printf("nine");
    }else{
        printf("More than 9, Can't do...");
    }
}

void displayDigitSwitch(int num){
    switch (num)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    default:
        printf("More than 9, Can't do...");
        break;
    }
}

int isPowerOfTwo(int num){
    if(num > 0 && (num & (num-1)) == 0){ //2^0
        return 1;
    }else {
        return 0;
    }
}

void simpleCalculator(double x, double y, int choice){
    switch (choice)
    {
    case 1:
        printf("Addition %lf", x+y);
        break;
    case 2:
        printf("Addition %lf", x-y);
        break;
    case 3:
        printf("Addition %lf", x*y);
        break;
    case 4:
        printf("Choose from 1->quotient, 2->reminder");
        int sub_choice;
        scanf("%d", &sub_choice);
        if (sub_choice == 1)
        {
            if(y != 0){
                printf("Quotient: %d", x/y);
            }else {
                printf("Can't devide by zero");
            }
            
        }else if(sub_choice == 2){
            printf("Remainder: %d", (int)x%(int)y);
        }else {
            printf("Sub Choice not appropriate");
        }
        
        break;
    default:
        break;
    }
}

int isLeapYear(int year){
     if(year%4 == 0 && year%100!=0){
        return 1;
    }else if(year%400 == 0){
        return 1;
    }else {
        return 0;
    }
}

int main() {
    int year;
    printf("Please Enter a Year\n");
    scanf("%d", &year);
    isLeapYear(year)?printf("Leap Year"):printf("Not Leap Year");
    // printf("Please Enter a Choice\n1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\t1.Quotient\n\t2.Remainder\n");
    // scanf("%d", &choice);
    // simpleCalculator(num1, num2, choice);

    // positiveOrNegetive(num);
    // evenOrOdd(num);
    // displayDigit(num);
    // displayDigitSwitch(num);
    // if(isPowerOfTwo(num)){
    //     printf("Yes");
    // }else {
    //     printf("No");
    // }


    return 0;
}