//C Progame to find grade with inputs of marks of 5 subjects
#include<stdio.h>
int main(){
    int sub_1,sub_2,sub_3,sub_4,sub_5,avg;
    scanf("%d %d %d %d %d",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);
    avg = (sub_1+sub_2+sub_3+sub_4+sub_5)/5;
    if(avg<100&&avg>90){
        printf("A1 Grade");
    }else if(avg<90&&avg>80){
        printf("A2 Grade");
    }else if(avg<80&&avg>70){
        printf("B1 Grade");
    }else if(avg<70&&avg>60){
        printf("B2 Grade");
    }else if(avg<60&&avg>50){
        printf("C1 Grade");
    }else if(avg<50&&avg>40){
        printf("C2 Grade");
    }else if(avg<40&&avg>30){
        printf("D Grade");
    }else if(avg<30&&avg>20){
        printf("E1 Grade");
    }else if(avg<20&&avg>0){
        printf("E2 Grade");
    }
}


