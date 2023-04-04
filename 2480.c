#include <stdio.h>

int dice(int dice1, int dice2, int dice3);

int main(){
    int result;
    int dice1, dice2, dice3;
    scanf("%d %d %d", &dice1, &dice2, &dice3);
    result = dice(dice1, dice2, dice3);
    printf("%d", result);
}

int dice(int dice1, int dice2, int dice3){
    int result;
    int com = 0;
    if(dice1==dice2 && dice2==dice3){ // 같은 눈이 3개 나오는 경우
        result = 10000+dice1*1000;
    }

    else if((dice1==dice2)||(dice2==dice3)||(dice1==dice3)){ // 같은 눈이 2개만 나오는 경우
        for(int i=0; i<3; i++){
            if(dice1==dice2){
                com = dice1;
            }
            else if(dice2==dice3){
                com = dice2;
            }
            else if(dice1==dice3){
                com = dice3;
            }
        }

        result = 1000+com*100;
    }

    else if(dice1 != dice2 && dice2 != dice3){ // 모두 다른 눈이 나온 경우
        if(dice1>com){
            com = dice1;
        }
        if(dice2>com){
            com = dice2;
        }
        if(dice3>com){
            com = dice3;
        }
        
        result = com * 100;
    }

    return result;
}



