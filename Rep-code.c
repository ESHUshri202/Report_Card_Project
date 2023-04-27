/*  Report Card Generator
    -Student name
    -Standard
    -Section
    -Marks secured in
        : Mathematics
        : English
        : Hindi
        : Science
        : Social Science
*/
#include<stdio.h>


int main() {
    //variable declarations

    int a,b,c,d,e;
    int sum;
    char studname[15];
    int stand ;
    char section;
    char Grade;
    // Welcome address of REPORT CARD SECTION

    printf("\n-----------------------------------------\n");
    printf("\tJawahar Navodaya Vidyalaya\n");
    printf("\n");
    printf("\t   Annual Report Card\n\n");
    printf("\n");

    // BASIC DETAILS OF STUDENT

    printf("\tName:");
    scanf("%[^\n]%*c", studname);
    printf("\n");
    printf("\tStandard:");
    scanf("%d", &stand);
    
    
    // Input Buffer clear code


    while((getchar()) != '\n');
    printf("\n");
    printf("\tSection:");
    scanf("%c", &section);
    printf("\n");
    printf("\n");
    
    
    // Marks Input through user.


    printf("Marks Secured out of 100");
    printf("\n");
    printf("\tMathematics:");
    scanf("%d",&a);
    printf("\n");
    printf("\tEnglish:");
    scanf("%d", &b);
    printf("\n");
    printf("\tHindi:");
    scanf("%d",&c);
    printf("\n");
    printf("\tScience:");
    scanf("%d", &d);
    printf("\n");
    printf("\tSocial Science:");
    scanf("%d",&e);
    printf("\n");
    printf("\n");
    
    // Total Marks Calculation
    

    sum=a+b+c+d+e;
    printf("\tTotal marks secured: %d",sum);
    printf("\n");
    
    //Grade Section

    if(sum >= 450 && sum <=500)
    {
        Grade='A';
    }
    else if (sum >=400 && sum <= 449)
    {
        Grade='B';
    }    
    else if( sum >= 350 && sum <= 399)
    {
        Grade= 'C';
    }
    else if( sum>= 300 && sum <= 349)
    {
        Grade= 'D';
    }
    else if ( sum >= 200 && sum <= 299)
    {
        Grade= 'E';
    }
    else
    {
        Grade = 'F';
    }
    printf("\n");
    printf("\tGrade: %c", Grade);
    
    printf("\n");
    printf("\n");
    
    printf("-----------------------------------------");

    return 0;
}