#include<stdio.h>
int calculateMarks(){
     int age,points;
    char result,result1,result2;
    printf("Enter your current age:");
    scanf("%d",&age);
    if(age<20){
        points+=1;
    }
    else if(age>= 20){
        if(age<30){
            points+=2;
        }
        else{
     points+=3;
        }
    }
   printf("Do you smoke (y/n)?");
   scanf(" %c",&result);
   if(result == 'y'){
    points+=4;
   }

        printf("Do you have high blood pressure(y/n)?");
        scanf(" %c",&result1);
        if(result1 == 'y'){
            points+=2;
        }
        else{
         printf("Do you eat high fat diet(y/n)?");
        scanf(" %c",&result2);
        if(result2 == 'y'){
            points+=1;
        }
   }
   return points;
}
int main(){

  printf("Your score is %d/10",calculateMarks());
  return 0;


}