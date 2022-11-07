//
//  main.c
//  Kalkulator
//
//  Created by Mateusz Migdał on 07/11/2022.
//



#include <stdio.h>
#include <string.h>

int dodawanie(int a,int b){
    return a + b;
}

int odejmowanie(int a, int b){
    return a - b;
}

int mnozenie(int a, int b){
    return a * b;
}

float dzielenie(int a,int b){
    return (float)a/(float)b;
}

int main(int argc, const char * argv[]) {
    //printf("%0.3f",dzielenie(2, 3));
    printf("Aviable commands: + ; - ; * ; / \n");
    char s;
    scanf("%c",&s);
    int a,b;
    if(s == '+'){
        printf("Write first nr\n");
        scanf("%d",&a);
        printf("Write second nr\n");
        scanf("%d",&b);
        printf("%d\n",dodawanie(a, b));
    }
    else if(s == '-'){
        printf("Write first nr\n");
        scanf("%d",&a);
        printf("Write second nr\n");
        scanf("%d",&b);
        printf("%d\n",odejmowanie(a, b));
    }
    else if(s == '*'){
        printf("Write first nr\n");
        scanf("%d",&a);
        printf("Write second nr\n");
        scanf("%d",&b);
        printf("%d\n",mnozenie(a, b));
    }
    else if(s == '/'){
        printf("Write first nr\n");
        scanf("%d",&a);
        printf("Write second nr\n");
        scanf("%d",&b);
        printf("%0.4f\n",dzielenie(a, b));
    }
}
