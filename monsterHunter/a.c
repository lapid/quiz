#include<stdio.h>
#include<string.h>
int HuntMonster(int monster[],int weapon[]);
int main(){
  int i;
  int monster[6]={0}; //モンスター数
  int weapon[6]={0};  //武器数
  char *input;        //入力
  int knockCount;     //倒した数
  scanf("%s",input);
  for(i=0;i<(int)strlen(input);i++){  //文字列の割り振り
    switch(input[i]){
      // monster
      case 'B':monster[0]++;break;
      case 'D':monster[1]++;break;
      case 'F':monster[2]++;break;
      case 'H':monster[3]++;break;
      case 'J':monster[4]++;break;
      case 'L':monster[5]++;break;
      
      // weapon
      case 'a':weapon[0]=1;break;
      case 'c':weapon[1]=1;break;
      case 'e':weapon[2]=1;break;
      case 'g':weapon[3]=1;break;
      case 'i':weapon[4]=1;break;
      case 'k':weapon[5]=1;break;
      default:break;
    }
  }
  printf("%d\n",HuntMonster(monster,weapon););
  return 0;
}

int HuntMonster(int monster[],int weapon[]){
  int counter=0,i=0;
  while(i<6){
    if(monster[i] != 0 && weapon[i]==1){
      counter+=monster[i];
      weapon[(i+1)%6]=1;
      monster[i]=0;
      i=0;
    }
    else i++;
  }
  return counter;
}
