//*
//**
//***
//****
//*****
//******
//*****
//****
//***
//**
//*
#include<stdio.h>
int main(){
    
    int i,j;
    
    for(i=0;i<6;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=6;i>0;i--){
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
    }

}


