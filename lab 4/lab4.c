#include <stdio.h>
#include <string.h>
//zadanie 1
//int main()
//{
//	char name[100] = "Joanna Nowak";
//	char album[] = "123456";
//
//	strcat(name, album);
//	printf("\nPolaczone teksty %s\n", name);
//
//	strcpy(name, album);
//	printf("Skopiowany tekst %s\n", name);
//
//
//	size_t len = strlen(name);
//	printf("Dlugosc tekstu wynosi: %lu", len);
//
//
//
//
//	return 0;
//}

//zadanie 2
//int main()
//{
//	char znak;
//
//	for (znak = 'a'; znak <= 'z'; znak++)
//	{
//		printf("%c: %d\n\t", znak, znak);
//	}
//
//	for (znak = 'A'; znak <= 'Z'; znak++)
//	{
//		printf("%c: %d\n\t", znak, znak);
//	}
//
//	for (znak = '0'; znak <= '9'; znak++)
//	{
//		printf("%c: %d\n\t", znak, znak);
//	}
//	return 0;
//}
//zadanie 3
//int main(){
//char tekst[1000];
//int ixd1 = 0;
//int ixd2 = 0;
//printf("Podaj tekst do sprawdzenia: \n");
//fgets(tekst, sizeof(tekst), stdin);
//char samogloski[18] = { 'a','A','e','E','i','I','o','O','u','U','y','Y','¹','¥','ê','Ê','ó','Ó' };
//char spolgloski[36] = { 'b','B','c','C','d','D','f','F','g','G','h','H','j','J','k','K','l','L','m','M','n','N','p','P','r','R','s','S','t','T','w','W','z','Z','x','X' };
//
//for (int i = 0; tekst[i] != '\0'; i++)
//{
//    for (int j = 0; j < 18; j++)
//    {
//        if (tekst[i] == samogloski[j])
//        {
//            ixd1++;
//            break;
//        }
//    }
//
//    for (int j = 0; j < 36; j++)
//    {
//        if (tekst[i] == spolgloski[j])
//        {
//            ixd2++;
//            break;
//        }
//    }
//}
//
//
//
//
//printf("Ilosc samoglosek w twoim tekscie to: %d\n", ixd1);
//printf("Ilosc spolglosk w twoim tekscie to: %d\n", ixd2);
//
//return 0;
//}
//zadanie 4
//int main()
//{
//	char tekst[1000];
//	printf("Podaj tekst do zamiany: \n");
//	fgets(tekst, sizeof(tekst), stdin);
//
//	for (int i = 0; tekst[i] != '\0'; i++)
//	{
//		if (tekst[i] >= 'a' && tekst[i] <= 'z')
//		{
//			printf("%c", tekst[i] - ('a' - 'A'));
//		}
//		else {
//			printf("%c", tekst[i]);
//		}
//	}
//	return 0;
//}
//zadanie 5
//void wypiszCyfre(int cyfra) {
//
//    switch (cyfra) {
//
//    case 0: printf("zero");
//        break;
//    case 1: printf("jeden");
//        break;
//    case 2: printf("dwa");
//        break;
//    case 3: printf("trzy");
//        break;
//    case 4: printf("cztery");
//        break;
//    case 5: printf("piec");
//        break;
//    case 6: printf("szesc");
//        break;
//    case 7: printf("siedem");
//        break;
//    case 8: printf("osiem");
//        break;
//    case 9: printf("dziewiec"); break;
//
//    default: break;
//    }
//}
//
//int main() {
//    int liczba;
//
//    printf("Podaj dodatnia liczbe calkowita: ");
//    if (scanf("%d", &liczba) != 1 || liczba < 0) {
//        printf("Podana wartosc jest niepoprawna. \n");
//        return 1;
//    }
//
//
//    printf("Litery liczby %d to: ", liczba);
//
//    int cyfry[10];
//    int indeks = 0;
//
//
//    do {
//        cyfry[indeks] = liczba % 10;
//        liczba /= 10;
//        indeks++;
//    } while (liczba > 0);
//
//
//    for (int i = indeks - 1; i >= 0; i--) {
//        wypiszCyfre(cyfry[i]);
//    }
//
//    printf("\n");
//    return 0;
//}
//zadanie 6
//int main() {
//
//    char s1[] = "abcdefghijklmnopqrstuvwxyz";
//    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
//    char in[100];
//    char out[100];
//
//    printf("Podaj ciag cyfr: \n");
//    fgets(in, sizeof(in), stdin);
//
//    int i, j;
//    for (i = 0; in[i] != '\0'; i++) {
//        char ch = in[i];
//        int found = 0;
//
//        for (j = 0; s1[j] != '\0'; j++) {
//            if (ch == s1[j]) {
//                out[i] = s2[j];
//                found = 1;
//                break;
//            }
//        }
//
//        if (!found) {
//            out[i] = ch;
//        }
//    }
//
//    out[i] = '\0';
//
//    printf("Wynik to: %s\n", out);
//
//    return 0;
//}