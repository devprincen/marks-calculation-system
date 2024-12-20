# result
On check result a small system enters the user input and this system returns the input with the result in C language

# Student Marks Calculation

This C program takes input marks for four subjects (Hindi, Maths, English, and Computer) and calculates the total marks and percentage. Below is the complete code:

```c
#include <stdio.h>

int main() {
    int Hindi, Maths, English, Computer;
    int TotalMarks = 100, TotalSub = 4;
    float Per;

    printf("Enter your marks \nHindi \nMaths \nEnglish \nComputer \n");
    scanf(" %d%d%d%d", &Hindi, &Maths, &English, &Computer);

    printf("Hindi: %d\n", Hindi);
    printf("Maths: %d\n", Maths);
    printf("English: %d\n", English);
    printf("Computer: %d\n", Computer);

    int Total = Hindi + Maths + English + Computer;
    printf("Your Total marks: %d\n", Total);

    printf("your marks to convert percentage: %d%d\n", TotalMarks * TotalSub)*100;

    return 0;
}
```

## Explanation of the Code

1. **Variable Declarations**:
   - `Hindi`, `Maths`, `English`, `Computer`: These store marks for the respective subjects.
   - `TotalMarks`: Total marks for a single subject (assumed to be 100).
   - `TotalSub`: Total number of subjects (4).
   - `Per`: To store the calculated percentage.

2. **Input**:
   - The program prompts the user to input marks for all four subjects.

3. **Calculation**:
   - The `Total` variable calculates the sum of marks in all subjects.

4. **Output**:
   - The program outputs marks for each subject, the total marks, and an incorrect placeholder for percentage (to be fixed).

## Note:
This program contains an error in the percentage calculation. The corrected version should look like this:

```c
#include <stdio.h>

int main() {
    int Hindi, Maths, English, Computer;
    int TotalMarks = 100, TotalSub = 4;
    float Per;

    printf("Enter your marks \nHindi \nMaths \nEnglish \nComputer \n");
    scanf(" %d%d%d%d", &Hindi, &Maths, &English, &Computer);

    printf("Hindi: %d\n", Hindi);
    printf("Maths: %d\n", Maths);
    printf("English: %d\n", English);
    printf("Computer: %d\n", Computer);

    int Total = Hindi + Maths + English + Computer;
    printf("Your Total marks: %d\n", Total);

    Per = (float) Total / (TotalMarks * TotalSub) * 100;
    printf("Your percentage: %.2f%%\n", Per);

    return 0;
}
```

### Output Example
If the user enters marks as `75, 80, 85, 90`, the output will be:

```
Enter your marks 
Hindi 
Maths 
English 
Computer 
Hindi: 75
Maths: 80
English: 85
Computer: 90
Your Total marks: 330
Your percentage: 82.50%
```

## Usage
You can copy and paste this code into an online C compiler or a local IDE to run it. Remember to fix the percentage calculation error if using the original code.

