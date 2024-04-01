#include<stdio.h>
float prog_avg(int programming[]);
float cal_avg(int calculus[]);
float phy_avg(int physics[]);
int prog_max(int programming[]);
int cal_max(int calculus[]);
int phy_max(int physics[]);
int prog_min(int programming[]);
int cal_min(int calculus[]);
int phy_min(int physics[]);




int main(){
int login;
int marks;
int programming[3]={0},calculus[3]={0},physics[3]={0}; //initializing each array of subject with 0, so no garbage values are stored in it
int roll;
int pass;    //4digit password, only integer, no char, float etc





for(int a=0;;a++){
printf("Enter as teacher or student?\n[1] Teacher\n[2] Student\n");
scanf("%d",&login); //asking the user if they are a teacher, or student, on which the whole system after this will be based on.



if(login==1){
for(int c=0;;){
    printf("Please enter password\n");
    scanf("%d",&pass);
    if(pass==1234){
        break;
    }
    else{
        printf("Wrong Password, please try again.\n");
    }
}
do{
printf("[1] Enter marks for Programming\n[2] Enter marks for Calculus\n[3] Enter marks for Physics\n[4] View the average, maximum and minimum marks in each subject.\n\n\n");
scanf("%d",&marks);
printf("\n");



switch(marks){
case 1:
for(int i=0;i<=2;i++){
printf("Marks of student %d out of 10\n",i+1);
scanf("%d",&programming[i]);
if(i==2){
    printf("Marks of all students entered successfully!\n\n");
}
}
break;
case 2:
for(int j=0;j<=2;j++){
printf("Marks of student %d out of 10\n",j+1);
scanf("%d",&calculus[j]);
if(j==2){
    printf("Marks of all students entered successfully!\n\n");
}
}
break;
case 3:
for(int k=0;k<=2;k++){
printf("Marks of student %d out of 10\n",k+1);
scanf("%d",&physics[k]);
if(k==2){
    printf("Marks of all students entered successfully!\n\n");
}
}
break;
case 4:
printf("The average of the class in Programming is %g\n",prog_avg(programming));
printf("The highest in programming is %d\n",prog_max(programming));
printf("The lowest in programming is %d\n\n",prog_min(programming));
printf("The average of the class in Calculus is %g\n",cal_avg(calculus));
printf("The highest in Calculus is %d\n",cal_max(calculus));
printf("The lowest in Calculus is %d\n\n",cal_min(calculus));
printf("The average of the class in Physics is %g\n",phy_avg(physics));
printf("The highest in physics is %d\n",phy_max(physics));
printf("The lowest in physics is %d\n\n",phy_min(physics));
break;
default:
printf("Wrong Number Selected, please select between 1 and 3\n");
}
}
while(marks!=4);
}











if(login==2){
printf("Please enter your roll number 1-3\n");
scanf("%d",&roll);
    if(roll==1){
        printf("Your score in programming is %d.\nYour score in Calculus is %d.\nYour score in Physics is %d\n\n",programming[0],calculus[0],physics[0]);
   
        printf("The average of the class in Programming is %g\n",prog_avg(programming));
printf("The highest in programming is %d\n",prog_max(programming));
printf("The lowest in programming is %d\n\n",prog_min(programming));
printf("The average of the class in Calculus is %g\n",cal_avg(calculus));
printf("The highest in Calculus is %d\n",cal_max(calculus));
printf("The lowest in Calculus is %d\n\n",cal_min(calculus));
printf("The average of the class in Physics is %g\n",phy_avg(physics));
printf("The highest in physics is %d\n",phy_max(physics));
printf("The lowest in physics is %d\n\n",phy_min(physics));
    }
    else if(roll==2){
        printf("Your score in programming is %d.\nYour score in Calculus is %d.\nYour score in Physics is %d\n\n",programming[1],calculus[1],physics[1]);
   
        printf("The average of the class in Programming is %g\n",prog_avg(programming));
printf("The highest in programming is %d\n",prog_max(programming));
printf("The lowest in programming is %d\n\n",prog_min(programming));
printf("The average of the class in Calculus is %g\n",cal_avg(calculus));
printf("The highest in Calculus is %d\n",cal_max(calculus));
printf("The lowest in Calculus is %d\n\n",cal_min(calculus));
printf("The average of the class in Physics is %g\n",phy_avg(physics));
printf("The highest in physics is %d\n",phy_max(physics));
printf("The lowest in physics is %d\n\n",phy_min(physics));
    }
    else if(roll==3){
        printf("Your score in programming is %d.\nYour score in Calculus is %d.\nYour score in Physics is %d\n\n",programming[2],calculus[2],physics[2]);
   
        printf("The average of the class in Programming is %g\n",prog_avg(programming));
printf("The highest in programming is %d\n",prog_max(programming));
printf("The lowest in programming is %d\n\n",prog_min(programming));
printf("The average of the class in Calculus is %g\n",cal_avg(calculus));
printf("The highest in Calculus is %d\n",cal_max(calculus));
printf("The lowest in Calculus is %d\n\n",cal_min(calculus));
printf("The average of the class in Physics is %g\n",phy_avg(physics));
printf("The highest in physics is %d\n",phy_max(physics));
printf("The lowest in physics is %d\n\n",phy_min(physics));
    }
    else{
        printf("Wrong roll number entered.\n");
    }
}
}
}









//functions start from here
float prog_avg(int programming[]){
float avg=0;
for(int i=0;i<=2;i++){
avg=avg+programming[i];
}
return avg/3;
}



float cal_avg(int calculus[]){
float avg=0;
for(int i=0;i<=2;i++){
avg=avg+calculus[i];
}
return avg/3;
}



float phy_avg(int physics[]){
float avg=0;
for(int i=0;i<=2;i++){
avg=avg+physics[i];
}
return avg/3;
}


int prog_max(int programming[]){
int max=0;
int temp;
for(int i=0;i<=2;i++){
if(max<programming[i]){
    max=programming[i];
}
}
return max;
}



int cal_max(int calculus[]){
int max=0;
int temp;
for(int i=0;i<=2;i++){
if(max<calculus[i]){
    max=calculus[i];
}
}
return max;
}



int phy_max(int physics[]){
int max=0;
int temp;
for(int i=0;i<=2;i++){
if(max<physics[i]){
    max=physics[i];
}
}
return max;
}


int prog_min(int programming[]){
int min=10;
int temp;
for(int i=0;i<=2;i++){
if(min>programming[i]){
    min=programming[i];
}
}
return min;
}



int cal_min(int calculus[]){
int min=10;
int temp;
for(int i=0;i<=2;i++){
if(min>calculus[i]){
    min=calculus[i];
}
}
return min;
}



int phy_min(int physics[]){
int min=10;
int temp;
for(int i=0;i<=2;i++){
if(min>physics[i]){
    min=physics[i];
}
}
return min;
}