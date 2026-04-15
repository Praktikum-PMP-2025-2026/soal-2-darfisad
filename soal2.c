/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - OVERVIEW OF C LANGUAGE
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Darfis Ahmad Dostriano (13224096)
 *   Nama File           : Batu_Stabil.c
 *   Deskripsi           : 
 *
 */

 #include <stdio.h>
 #include <string.h>

int langkah(int n) {
    if (n==1) return 0;
    if (n%2==0) return 1 + langkah(n/2);
    else return 1 + langkah(3*n+1);
}
void transformasi(int n, int steps) {
    if (n == 1) {
        printf("Jumlah langkah untuk mencapai 1: %d\n", steps);
        return;
    }
    if (n % 2 == 0) {
        transformasi(n / 2, steps + 1);
    } else {
        transformasi(3 * n + 1, steps + 1);
    }
}
int main () {
    int n;
    printf("Masukan angka: ");
    scanf("%d", &n);
    printf("LANGKAH %d\n", langkah(n));
    return 0;
 }
