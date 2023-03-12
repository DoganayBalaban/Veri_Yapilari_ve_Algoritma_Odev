#include <stdio.h>

int Search(int A[], int N, int sayi){
    int i = 0;

    while (i < N){
        if (A[i] == sayi) break;
        i++;
    }

    if (i < N) return i;
    else return -1;
}

/* En iyi çalışma zamanı ;
 * Döngü bir kez çalıştı T(n) = 7 */

/*Ortalama çalışma zamanı ;
 * Döngü N / 2 kez çalıştı T(n) = 3 * n / 2 + 3 = 1.5n + 4 */

/*En kötü çalışma zamanı ;
 * Döngü N kez çalıştı T(n) = 3n + 4 */
int main() {
    printf("Doganay Balaban -- 1220505057");
    return 0;
}
