#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { //don like. Come back later
    srand(time(0));
    int iterations;
    printf("Wypisz ilosc iteracji: \n");
    scanf("%i",&iterations);
    int inside_circle = 0;
    double x, y;


    for (int i = 0; i < iterations; i++) {
        x = ((double) rand() / RAND_MAX) * 2 - 1;
        y = ((double) rand() / RAND_MAX) * 2 - 1;

        if (x * x + y * y <= 1) {
            inside_circle++;
        }
    }

    double pi = (double) inside_circle / iterations * 4;

    printf("Wartosc PI: %f\n", pi);
    return 0;
}