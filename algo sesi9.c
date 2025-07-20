#include <stdio.h>
#include <string.h>

int main() {
    char hal[100];
    char status[10];
    char daftar[1000] = "";
    int count = 1;

    printf("Program: Apa saja yang perlu dilakukan agar lulus Mata Kuliah ini?\n");

    do {
        printf("\n[%d] Apa hal yang perlu kamu lakukan? ", count);
        fgets(hal, sizeof(hal), stdin);
        hal[strcspn(hal, "\n")] = 0;  // hapus newline
        strcat(daftar, "- ");
        strcat(daftar, hal);
        strcat(daftar, "\n");

        printf("Apakah kamu sudah lulus? (ya/tidak): ");
        fgets(status, sizeof(status), stdin);
        status[strcspn(status, "\n")] = 0;

        count++;
    } while (strcmp(status, "ya") != 0);

    printf("\n🎓 Selamat! Kamu telah lulus mata kuliah ini!\n");
    printf("Berikut adalah hal-hal yang telah kamu lakukan:\n");
    printf("%s", daftar);

    return 0;
}
