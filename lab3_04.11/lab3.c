//
////zad 1 i zad 2
//#include <stdio.h>
//#include<string.h>
//#define ROZMIAR 10
//int main() {
//	int tab[ROZMIAR], x = 3;
//	for (int i = 0; i < ROZMIAR; i++)
//	{
//		tab[i] = x; printf("%d \t", tab[i]);
//		x += 3;
//	}
//	printf("\n Co druga wartosc z tablicy:\n");
//	for (int i = 0; i < ROZMIAR; i+=2)
//	{
//		printf("%d \t", tab[i]);
//	}
//
//
//	return 0;
//}
//zad3
//#include <stdio.h>
//#include<string.h>
//#define N 5
//int main() {
//	printf("Podaj a: ");
//	int a = 0;
//	scanf_s("%d", &a);
//	int tab[N];
//	int tmp = 0;
//	for (int i = N - 1; i >= 0; i--)
//	{
//		tab[i] = a - tmp;
//		tmp += 5;
//		printf("%d\t", tab[i]);
//	}
//
//
//	for (int i = 0; i < 5; i++)
//	{
//
//	}
//	
//
//
//	return 0;
//}
// zad4
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int rozmiar = 10;
//	int min = -23;
//	int max = 50;
//	int tablica[10];
//	srand(time(NULL));
//	for (int i = 0; i < rozmiar; i++) {
//		tablica[i] = rand() % (max - min + 1) + min;
//	}
//	printf("Wylosowane liczby:\n");
//	for (int i = 0; i < rozmiar; i++) {
//		printf("%d ", tablica[i]);
//	}
//	printf("\n");
//	int najmniejsza = tablica[0];
//	for (int i = 1; i < rozmiar; i++) {
//		if (tablica[i] < najmniejsza) {
//			najmniejsza = tablica[i];
//
//		}
//	}
//	printf("Najmniejsza liczba: %d\n", najmniejsza);
//	return 0;
//}
//zad5
//#include <stdio.h>
//int main() { 
//    int tablica[5];
//    printf("Podaj dwie pierwsze liczby:\n");
//    printf("Pierwsza liczba: ");
//    scanf_s("%d", &tablica[0]);
//
//    printf("Druga liczba: ");
//    scanf_s("%d", &tablica[1]);
//
//    for (int i = 1; i < 4; i++)
//    {
//        tablica[i + 1] = tablica[i] + tablica[i - 1];
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d \t", tablica[i]);
//    }
//
//
//	return 0;
//}
// zad6
//#include <stdio.h>
//int main() {
//	int tablica[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (int i = 0; i < 10; i++)
//	{
//		tablica[i + 10] = tablica[i];
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d \n", tablica[i]);
//	}
//
//
//
//	return 0;
//}
//zad7
//#include <stdio.h>
//int main() {
//	int tab2D[3][3] = { 1,2,3,4,5,6,7,8,9, };
//	int suma = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d \t", tab2D[i][j]);
//			if (i == j)
//				suma += tab2D[i][j];
//		}
//		printf("\n");
//
//
//	}
//	printf("\n suma %d", suma);
//
//
//	return 0;
//}
//zad8
//#include <stdio.h>
//int main() {
//
//	int macierz1[3][3] = { 1,2,3,4,5,6,7,8,9, };
//	int macierz2[3][3] = { 1,2,3,4,5,6,7,8,9, };
//	int suma[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			suma[i][j] = macierz1[i][j] + macierz2[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//			{
//				for (int j = 0; j < 3; j++)
//				{
//					printf("%d \t", suma[i][j]);
//				}
//				printf("\n");
//		
//		
//			}
//
//
//	return 0;
//}