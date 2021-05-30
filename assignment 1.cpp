/*
c program to implementing arrays and structures
OBJ:Enter details of employee such as name,employee ID,experience and salary.
*/
#include<stdio.h>
#include<string.h>
struct employee

{
    char name[20];
    char employeeid[20];
   char experience[1];
   char salary[1];
};

    int main()
  {
    int i=0;
    struct employee s1;
    printf("Enter your Name 1:");
    gets(s1.name);
    printf("Enter your employeeid:");
    gets(s1.employeeid);
    printf("Enter your experience:");
    gets(s1.experience);
    printf("Enter your salary:");
    gets(s1.salary);

   {
     int i=0;
    struct employee s2;
    printf("Enter your Name 2:");
    gets(s2.name);
    printf("Enter your employeeid:");
    gets(s2.employeeid);
    printf("Enter your experience:");
    gets(s2.experience);
    printf("Enter your salary:");
    gets(s2.salary);

    {
     int i=0;
    struct employee s3;
    printf("Enter your Name 3:");
    gets(s3.name);
    printf("Enter your employeeid:");
    gets(s3.employeeid);
    printf("Enter your experience:");
    gets(s3.experience);
    printf("Enter your salary:");
    gets(s3.salary);

    {
     int i=0;
    struct employee s4;
    printf("Enter your Name 4:");
    gets(s4.name);
    printf("Enter your employeeid:");
    gets(s4.employeeid);
    printf("Enter your experience:");
    gets(s4.experience);
    printf("Enter your salary:");
    gets(s4.salary);

    {
     int i=0;
    struct employee s5;
    printf("Enter your Name 5:");
    gets(s5.name);
    printf("Enter your employeeid:");
    gets(s5.employeeid);
    printf("Enter your experience:");
    gets(s5.experience);
    printf("Enter your salary:");
    gets(s5.salary);

     {
    printf("\n name:%s",s1.name);
    printf("\n id:%s",s1.employeeid);
    printf("\n experience:%s",s1.experience);
    printf("\n salary:%s",s1.salary);

   }

   {
    printf("\n name:%s",s2.name);
    printf("\n id:%s",s2.employeeid);
    printf("\n experience:%s",s2.experience);
    printf("\n salary:%s",s2.salary);
   }
      {
    printf("\n name:%s",s3.name);
    printf("\n id:%s",s3.employeeid);
    printf("\n experience:%s",s3.experience);
    printf("\n salary:%s",s3.salary);
      }
         {
    printf("\n name:%s",s4.name);
    printf("\n id:%s",s4.employeeid);
    printf("\n experience:%s",s4.experience);
    printf("\n salary:%s",s4.salary);
         }
       {
    printf("\n name:%s",s5.name);
    printf("\n id:%s",s5.employeeid);
    printf("\n experience:%s",s5.experience);
    printf("\n salary:%s",s5.salary);
       }

    return 0;
}

  }
    }
   }
  }

