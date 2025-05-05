#include<stdio.h>

struct course{
    char course_name[100], instructor[100];
    int credits,hours_per_week;
};

struct library{
    char book_title[100], borrower_name[100];
    int days_late;
};

struct hostel{
    char student_name[100];
    int room_no, electricity_units;
    float mess_fee;
};

struct exam{
    char student_name[100], reg_no[100];
    int marks[5];
};

int main(){

    // ! Q1.
    struct course c1;
    printf("Enter the course name:\n");
    scanf("%[^\n]s",c1.course_name);
    printf("Enter the Instructor Name:\n");
    scanf("%s",c1.instructor);
    printf("Enter the credits:\n");
    scanf("%d",&c1.credits);
    printf("Enter the hours per week:\n");
    scanf("%d",&c1.hours_per_week);
    printf("The Course is %s\n",c1.course_name);
    printf("The Instructor is %s\n",c1.instructor);
    printf("The credits is %d\n",c1.credits);
    printf("The hours per day is %d\n",c1.hours_per_week);
    printf("The workload is %d\n",c1.hours_per_week * c1.credits);

    // ! Q2.
    struct library l;
    printf("Enter the book title:\n");
    scanf("%s",l.book_title);
    printf("Enter the borrower's name:\n");
    scanf("%s",l.borrower_name);
    printf("Enter the days late:\n");
    scanf("%d",&l.days_late);
    int fine=0;
    if (l.days_late > 7){
        fine=l.days_late*2;
    }
    printf("The fine amount is %d\n", fine);

    // ! Q3.
    struct hostel h;
    printf("Enter the student name:\n");
    scanf("%s",h.student_name);
    printf("Enter the room no.:\n");
    scanf("%d",&h.room_no);
    printf("Enter the mess fee:\n");
    scanf("%f",&h.mess_fee);
    printf("Enter the electricity units:\n");
    scanf("%d",&h.electricity_units);
    float total_bill = h.mess_fee + 10 * h.electricity_units;
    printf("The student name is %s\n",h.student_name);
    printf("The room no. is %d\n",h.room_no);
    printf("The mess fee is %f\n",h.mess_fee);
    printf("The electricity units is %d\n",h.electricity_units);
    printf("The total bill is%.2f\n",total_bill);


    // ! Q4.
    struct exam e;
    int avg=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Marks of Subject %d:",i+1);
        scanf("%d",&e.marks[i]);
        avg+=e.marks[i];
    }
    avg/=5;
    if(avg >= 40){
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
}