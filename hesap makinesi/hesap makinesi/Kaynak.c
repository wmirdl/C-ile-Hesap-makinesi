#include <stdio.h>

int main(void) {
    int n1, n2, islem;
    printf("Bir sayi giriniz: ");
    fscanf_s(stdin, "%d", &n1);
    printf("Ikinci say� giriniz: ");
    fscanf_s(stdin, "%d", &n2);
    printf("Islem seciniz (1: carpma, 2: bolme, 3: toplama, 4: cikarma): ");
    fscanf_s(stdin, "%d", &islem);

    switch (islem) {
        case 1:
            printf("�arpma i�lemi sonucu: %d\n", n1 * n2);
            break;
        case 2:
            if (n2 != 0)
                printf("B�lme i�lemi sonucu: %d\n", n1 / n2);
            else
                printf("S�f�ra b�lme hatas�!\n");
            break;
        case 3:
            printf("Toplama i�lemi sonucu: %d\n", n1 + n2);
            break;
        case 4:
            printf("��karma i�lemi sonucu: %d\n", n1 - n2);
            break;
        default:
            printf("Ge�ersiz i�lem!\n");
            break;
    }

    return 0;
}