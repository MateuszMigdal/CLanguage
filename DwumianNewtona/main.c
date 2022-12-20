#include <stdio.h>

int dwumian(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return dwumian(n - 1, k - 1) + dwumian(n - 1, k);
}

int main()
{
    int n, k;
    printf("Wpisz dwie liczby: ");
    scanf("%d%d", &n, &k);
    printf("Dwumian newtona wynosi %d\n", dwumian(n, k));
    return 0;
}
