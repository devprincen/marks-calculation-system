#include <stdio.h>
#include <conio.h>

void wellcome();
void resualt();

int main() {
    wellcome();
    resualt();
    return 0;
}

void wellcome() {
     int enter;

     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t | Wellcome |\n");
     printf("\t\t\t    _____________________");

     getch();
}

void resualt() {
    int hindi,maths,english,computer;
    int total, totalSub = 4;
    float percentage;

    clrscr();
    printf("\t\t\t\tPercentage Calculator\n\n");
    printf("Enter your marks \nHindi \nMaths \nEnglish \nComputer\n");
    scanf("%d%d%d%d",&hindi,&maths,&english,&computer);

    printf("Hindi: %d\n", hindi);
    printf("Maths: %d\n", maths);
    printf("English: %d\n", english);
    printf("Computer: %d\n", computer);


    total = hindi + maths + english + computer;
    printf("Your Total marks: %d\n", total);

    percentage = ((float)total/400)*100;

    printf("Total Percentage is a %.2f\n", percentage);

    getch();
}
