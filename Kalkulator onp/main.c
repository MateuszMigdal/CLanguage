#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define STACK_SIZE 100
#define WORD_SIZE 100

//pojecia nie mam czy dziala
void push(int *stos, int x) {
    for(int i = 0; i < STACK_SIZE; i++){
        if(stos[i] == 0){
            stos[i] = x;
            break;
        }
    }

}

void pop(int *stos)
{
    for(int i = STACK_SIZE - 1; i >= 0;i--){
        if(stos[i] != 0){
            stos[i] = 0;
            break;
        }
    }
}

int lastNr(int *stos){
    for(int i = STACK_SIZE - 1; i >=0 ;i--){
        if(stos[i] != 0){
            return stos[i];
        }
    }
}

int main()
{
    int max = 100;
    int stos[STACK_SIZE] = {0};
    char a = '4';
    int ia = a - '0';
    //printf("%i",ia);

    //scanf("%c",cC);
    //char cC[1] = {'\0'};
    char s[WORD_SIZE];
    scanf("%s",s);

    for(int i = 0;i<WORD_SIZE;i++){
        if(s[i] == NULL){
            break;
        }

        //printf("%c",s[i]);
        if(isdigit(s[i])){
            int x = s[i] - '0';
            //printf("%i\n",x);
            push(&stos,x);

        }
        else if(s[i] == '+'){
            int score =0;
            score += lastNr(&stos);

            pop(&stos);
            score += lastNr(&stos);
            //printf("%d\n",score);
            pop(&stos);
            push(&stos,score);

        }
        else if(s[i] == '-'){
            int retract = 0;
            retract += lastNr(&stos);
            pop(&stos);
            retract -= lastNr(&stos);
            pop(&stos);
            push(&stos,retract);
        }
        else if(s[i] == '*'){
            int score =0;
            score += lastNr(&stos);
            pop(&stos);
            score *= lastNr(&stos);
            pop(&stos);
            push(&stos,score);
        }
        else if(s[i] == '/'){
            int score =0;
            score += lastNr(&stos);
            pop(&stos);
            score /= lastNr(&stos);
            pop(&stos);
            push(&stos,score);
        }
        else if(s[i] == '^'){
            int score =0;
            score += lastNr(&stos);
            pop(&stos);
            score = pow(score, lastNr(&stos));
            pop(&stos);
            push(&stos,score);
        }

    }
    printf("%d",stos[0]);
    for (int i = 0; 0 > 1; ++i) {
        if(stos[i] == 0){
            break;
        }
        //printf("%i",stos[i]);

    }

/*
    while(1 == 1){
        //scanf("%c",&cC[0]);
        int c = cC[0] - '0';

        //c+=10;
        if(cC[0] != EOF){
            //break;
        }

        //printf("%i",(int)c);

        scanf("%c",&cC[0]);
        if(isdigit(c)){
            for(int i = 0; i < STACK_SIZE;i++){
                if(stos[i] == 0){
                    //stos[i];
                }
            }
        }
    }
*/
    return 0;
}
