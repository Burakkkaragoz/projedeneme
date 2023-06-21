/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Student { 
    char studentID[30];
    char studentName[25];
    char studentSurname[30];
    int countLesson;
};
struct Lesson{
   char lessonCode[10];
   int mdtrm;
   int final;
   int task;
   
};
 void print(struct Student student){
     struct Lesson lesson;
     FILE *dosya1;
     FILE *dosya2;
     
     dosya1=fopen("students.txt","w");
     printf("name");
     scanf("%s",student.studentName);
     
      printf("surname");
     scanf("%s",student.studentSurname);
     
      printf("id");
     scanf("%s",student.studentID);
     
     printf("countLesson");
     scanf("%d",&student.countLesson);
     fprintf(dosya1,"%s %s %s ",student.studentName,student.studentSurname,student.studentID);
     fclose(dosya1);
      dosya2=fopen("students.txt","a");
     int i ;
     for (i=0;i<student.countLesson;i++){
     printf("lessonCode");
     scanf("%s",lesson.lessonCode);
     
      printf("mdtrm");
     scanf("%d",&lesson.mdtrm);
     
      printf("final");
     scanf("%d",&lesson.final);
     
      printf("task");
     scanf("%d",&lesson.task);
    
     fprintf(dosya2," \n%s %d %d %d",lesson.lessonCode,lesson.mdtrm,lesson.final,lesson.task);
         
     }
     
    
     fclose(dosya2);
     
 }
    int main()
{
        struct Student student;
        print(student);
        
        
   
    return 0;
}
