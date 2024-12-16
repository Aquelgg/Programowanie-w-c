#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ZADANIE 1
//int main()
//{
//	int zmienna;
//	int* wskaznik = &zmienna;
//	printf("Adres zadeklarowanej zmiennej to: %p \n", wskaznik);
//
//	printf("Podaj wartosc zmiennej: \n");
//	scanf_s("%d", &zmienna);
//
//	printf("Wartosc zmiennej wynosi: %d\n", zmienna);
//	printf("Adres zmiennej wynosi: %p\n", wskaznik);
//
//	float roznica1;
//
//	float* wskaznik1 = &roznica1;
//
//	float roznica2;
//
//	float* wskaznik2 = &roznica2;
//
//	float wynik1;
//
//	printf("Podaj pierwsza liczbe do odejmowania: \n");
//	scanf_s("%f", wskaznik1);
//	printf("Podaj druga liczbe do odejmowania: \n");
//	scanf_s("%f", wskaznik2);
//	wynik1 = *(wskaznik1)-*(wskaznik2);
//	printf("Wynik roznicy wynosi: %f \n", wynik1);
//
//
//	float liczba1;
//	float* ws1 = &liczba1;
//	float liczba2;
//	float* ws2 = &liczba2;
//	float liczba3;
//	float* ws3 = &liczba3;
//	float wynik;
//	float srednia;
//
//	printf("Podaj wartosc pierwszej liczby: \n");
//	scanf_s("%f", ws1);
//	printf("Podaj wartosc drugiej liczby: \n");
//	scanf_s("%f", ws2);
//	printf("Podaj wartosc trzeciej liczby: \n");
//	scanf_s("%f", ws3);
//
//	wynik = *(ws1)+*(ws2)+*(ws3);
//	srednia = wynik / 3;
//
//	printf("Srednia tych liczb wynosi: %f\n", srednia);
//
//	return 0;
//}
//ZADANIE 2
//int main()
//{
//	int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int minimum;
//	int maximum;
//
//	printf("Adres pierwszego elemmentu tablicy wynosi: %p \n", &tab[0]);
//	printf("Adres czwartego elementu tablicy wynosi: %p \n", &tab[3]);
//
//	printf("Podaj minimalny zakres przedzialu: ");
//	scanf_s("%d", &minimum);
//	printf("Podaj maksymalny zakres przedzialu: ");
//	scanf_s("%d", &maximum);
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; i++)
//	{
//		tab[i] = minimum + rand() & (maximum - minimum + 1);
//		printf("tab[%d] = %d, Adresy wylosowanych wartosci: %p \n", i, tab[i], &tab[i]);
//	}
//
//	return 0;
//}
//zadanie 3
//int main()
//{
//	int n;
//
//	printf("Podaj ilosc elementow twojej tablicy: \n");
//	scanf_s("%d", &n);
//
//	if (n <= 0)
//	{
//		printf("Tablica musi miec jakies elementy! \n");
//		return 1;
//	}
//
//	int* tab = (int*)malloc(n * sizeof(int));
//	if (!tab)
//	{
//		printf("Blad alokacji pamieci! \n");
//		return 1;
//	}
//
//	printf("Wprowadz %d elementy tablicy: \n", n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &tab[i]);
//	}
//
//	int suma = 0;
//	for (int i = 0; i < n; i++)
//	{
//		suma += tab[i];
//	}
//	float srednia = suma / (float)n;
//
//	printf("Srednia elementow tablicy wynosi: \n", srednia);
//
//	printf("Liczby wieksze od sredniej to: \n");
//	for (int i = 0; i < n; i++)
//	{
//		if (tab[i] > srednia) {
//			printf("%d", tab[i]);
//		}
//	}
//
//
//	free(tab);
//	return 0;
//}
//zadanie 4
//void potega(float* n)
//{
//	*n = (*n) * (*n);
//}
//
//int main()
//{
//	float liczba;
//
//	printf("Podaj liczbe ktora zostanie spotegowana do kwadratu: \n");
//	scanf_s("%f", &liczba);
//
//	potega(&liczba);
//
//	printf("Liczba po spotegowaniu do kwadratu wynosi: %f \n", liczba);
//
//	return 0;
//}
//zadanie 5
//float* potega(float* podstawa, int* wykladnik)
//{
//	static float wynik;
//	wynik = 1.0;
//
//	for (int i = 0; i < *wykladnik; i++)
//	{
//		wynik *= *podstawa;
//	}
//
//	return &wynik;
//}
//
//int main()
//{
//	float liczba;
//	int wykladnik;
//
//	printf("Podaj liczbe do spotegowania: \n");
//	scanf_s("%f", &liczba);
//	printf("Podaj wykladnik potegi: \n");
//	scanf_s("%d", &wykladnik);
//
//	float* wynik = potega(&liczba, &wykladnik);
//
//	printf("Wynik potegowania to: %f \n", *wynik);
//
//	return 0;
//}
//zadanie 6
//void wypiszz(char* znak, int* iloscp)
//{
//	for (int i = 0; i < *iloscp; i++)
//	{
//		printf("%c", *znak);
//	}
//
//	(*iloscp)--;
//}
//
//int main()
//{
//	char znak;
//	int iloscp;
//
//	printf("Podaj znak do wypisania: \n");
//	znak = getchar(); //scanf_s do stringów jest do niczego zapamiêtaæ!
//	printf("Podaj ilosc powtorzen z jakimi znak zostanie wypisany: \n");
//	scanf_s("%d", &iloscp);
//
//	wypiszz(&znak, &iloscp);
//
//	return 0;
//}

//zadanie 7
//int* liczby_m(int* a, int* b)
//{
//	static int m;
//	if (*a < *b)
//	{
//		m = *a;
//	}
//	else {
//		m = *b;
//	}
//	return &m;
//}
//
//int main()
//{
//	int x;
//	int y;
//	printf("Podaj pierwsza liczbe: \n");
//	scanf_s("%d", &x);
//	printf("Podaj druga liczbe: \n");
//	scanf_s("%d", &y);
//
//	int* mniejsza = liczby_m(&x, &y);
//
//
//	printf("Mniejsza liczba jest: %d \n", *mniejsza);
//	printf("Adres tej mniejszej liczby wynosi: %p \n", (void*)mniejsza);
//
//	return 0;
//}
//zadanie 8
//void zamiana_z(int* a, int* b)
//{
//	int tymczasowa = *a;
//	*a = *b;
//	*b = tymczasowa;
//}
//
//int main()
//{
//	int x;
//	int y;
//
//	printf("Podaj pierwsza liczbe: \n");
//	scanf_s("%d", &x);
//	printf("Podaj druga liczbe: \n");
//	scanf_s("%d", &y);
//
//	printf("Przed zamiana liczby wygladaja nastepujaco: x = %d, y = %d \n", x, y);
//
//	zamiana_z(&x, &y);
//
//	printf("Po zamianie liczby wygladaja nastepujaco: x = %d, y = %d \n", x, y);
//
//	return 0;
//}