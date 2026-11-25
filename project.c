
#include <stdio.h>

struct student
{
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

// Member 1 - Kirti
void inputstudent(struct student s[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        for (j = 0; j < 5; j++)
        {
            printf("Enter the marks for subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);

            while (s[i].marks[j] < 0 || s[i].marks[j] > 100)
            {
                printf("Invalid marks! Enter marks between 0 and 100: ");
                scanf("%f", &s[i].marks[j]);
            }
        }
    }
}


void calculateresult(struct student s[], int n, int pass[])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        pass[i] = 1;

        for (j = 0; j < 5; j++)
        {
            s[i].total = s[i].total + s[i].marks[j];

            if (s[i].marks[j] < 40)
            {
                pass[i] = 0;
            }
        }

        s[i].percentage = (s[i].total / 500) * 100;

        if (pass[i] == 0 || s[i].percentage < 40)
        {
            s[i].grade = 'F';
        }
        else if (s[i].percentage >= 90)
        {
            s[i].grade = 'A';
        }
        else if (s[i].percentage >= 80)
        {
            s[i].grade = 'B';
        }
        else if (s[i].percentage >= 70)
        {
            s[i].grade = 'C';
        }
        else if (s[i].percentage >= 60)
        {
            s[i].grade = 'D';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}

void displayresults(struct student s[], int n, int pass[])
{
    int i;

    printf("\n======STUDENT RESULT======\n");

    for (i = 0; i < n; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Total: %.2f /500\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("Grade: %c\n", s[i].grade);

        if (pass[i] == 1)
        {
            printf("STATUS=PASS\n");
        }
        else
        {
            printf("STATUS=FAIL\n");
        }
    }
}

// Member 2 - Venya
void classreport(struct student s[], int n)
{
    int i, topper = 0;
    float totalpercentage = 0;
    float average;

    for (i = 0; i < n; i++)
    {
        totalpercentage += s[i].percentage;

        if (s[i].percentage > s[topper].percentage)
        {
            topper = i;
        }
    }

    average = totalpercentage / n;

    printf("\n=====CLASS REPORT=====\n");
    printf("Topper: %s\n", s[topper].name);
    printf("Topper percentage: %.2f%%\n", s[topper].percentage);
    printf("Class average: %.2f%%\n", average);
}

int main()
{
    struct student s[10];
    int pass[10];
    int n;
    int choice;
    int dataentered = 0;

    printf("===== STUDENT RESULT AND GRADE ANALYZER =====\n");

    printf("Enter number of students (1-10): ");
    scanf("%d", &n);

    while (n < 1 || n > 10)
    {
        printf("Invalid! Enter number of students between 1 and 10: ");
        scanf("%d", &n);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Student Results\n");
        printf("3. Display Class Report\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputstudent(s, n);
            calculateresult(s, n, pass);
            dataentered = 1;
            printf("\nStudent data entered successfully!\n");
            break;

        case 2:
            if (dataentered == 1)
            {
                displayresults(s, n, pass);
            }
            else
            {
                printf("\nPlease enter student details first!\n");
            }
            break;

        case 3:
            if (dataentered == 1)
            {
                classreport(s, n);
            }
            else
            {
                printf("\nPlease enter student details first!\n");
            }
            break;

        case 4:
            printf("\nExiting program...\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
