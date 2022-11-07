//
//  main.c
//  Silnia
//
//  Created by Mateusz Migdał on 25/10/2022.
//

#include <stdio.h>

long long int silnia(int a);

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    scanf("%d",&a);
    //printf("%lld\n",silnia(a));
    
    return 0;
}

long long int silnia(int a){
    long long int temp1 = a;
    
    for(int i = a-1; i > 0; i--){
        temp1 *= i;
    }
    
    return temp1;
}
