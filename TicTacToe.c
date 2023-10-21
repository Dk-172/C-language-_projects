#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
int X=0,O=0;
int in;
char ch='O';
char array[9];
void draw();
void clear();
void input();
void logic();
void main(){
    system("cls");
    clear();
    draw();
    printf("\nLet's start !\n");
    while(1){
    input();
    draw();
                if(in==0){
                return;
                   }
    logic();
    }
}
void draw(){
   
    system("cls");
    printf("\t\t\t\t --TIC TAC TOE--\n\n");
    printf("\t\t\t\t %c | %c | %c \n",array[6],array[7],array[8]);
    printf("\t\t\t\t--- --- ---\n");
    printf("\t\t\t\t %c | %c | %c \n",array[3],array[4],array[5]);
    printf("\t\t\t\t--- --- ---\n");
    printf("\t\t\t\t %c | %c | %c \n\n",array[0],array[1],array[2]);
    printf("Player1 (O) score = %d || Player2 (X) score = %d\n",O,X);
    printf("-----------Entre 0 to exit--------------- ");
}
void input(){
    scanf("%d",&in);
    if(in<=9&&in>0){
    array[in-1]=ch;
    }
    else{
    printf("Please the valid key !!");
    }
}
void clear(){
    for(int i=0;i<9;i++){
array[i]=' ';
    }
    draw();
}


void logic(){
if(((array[7]==ch)&&(array[6]==array[7]&&array[7]==array[8]))||((array[4]==ch)&&(array[3]==array[4]&&array[4]==array[5]))||((array[1]==ch)&&(array[0]==array[1]&&array[1]==array[2]))){
    if(ch=='O'){
        O++;
        sleep(2);

    }
    else{
        X++;
        sleep(2);
    }
    clear();
    }
 if(((array[3]==ch)&&(array[0]==array[3]&&array[3]==array[6]))||((array[4]==ch)&&(array[1]==array[4]&&array[4]==array[7]))||((array[5]==ch)&&(array[2]==array[5]&&array[5]==array[8]))){
        if(ch=='O'){
        O++;
    sleep(2);
    }
    else{
        X++;
     sleep(2);

    }
        clear();
    }
 if(((array[4]==ch)&&(array[2]==array[4]&&array[4]==array[6]))||((array[4]==ch)&&(array[0]==array[4]&&array[4]==array[8]))){
    if(ch=='O'){
        O++;
     sleep(2);

    }
    else{
        X++;
     sleep(2);

    }
        clear();
}
 if(ch=='O'){
        ch='X';
    }
    else{
        ch='O';
    }
}
