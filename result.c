// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int Hindi,Maths,English,Computer;
    int TotalMarks = 100, TotalSub = 4;
    float Per;
    
    printf("Enter your marks \nHindi \nMaths \nEnglish \nComputer \n");
    scanf(" %d%d%d%d",&Hindi,&Maths,&English,&Computer);
    
    printf("Hindi: %d\n", Hindi);
    printf("Maths: %d\n", Maths);
    printf("English: %d\n", English);
    printf("Computer: %d\n", Computer);
    
    
    int Total = Hindi + Maths + English + Computer;
    printf("Your Total marks: %d\n", Total);
    
    printf("your marks to convert percentage: %d%d\n", TotalMarks * TotalSub)*100;
    
    
    return 0;
}
