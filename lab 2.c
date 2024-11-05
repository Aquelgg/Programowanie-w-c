//zad1
//
//#include <stdio.h>
//int main() {
//	int liczba = 1;
//	float suma = 0;
//	int licznik = 0;
//	int max = 0;
//	while (liczba > 0)
//	{
//		printf("podaje liczbe: ");
//		scanf_s("%d", &liczba);
//		suma += liczba;
//		if (licznik==0)
//		{
//			max = liczba;
//		}
//		else if (max < liczba) {
//			max = liczba;
//		}
//		
//		
//		licznik++;
//		
//
//
//
//	}
//	printf("\nsuma = %f", suma);
//	float srednia = suma / licznik;
//	printf("\nsrednia= %f", srednia);
//
//	printf("\n max = %d", max);
//	
//
//	return 0;
//}
//zad2
//
//#include <stdio.h>
//int main(){
//	int licznik2 = 0;
//	int licznik1 = 0;
//	int liczba = 0;
//	int suma1 = 0;
//	int suma2 = 0;
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("podaj liczbe: ");
//		scanf_s("%d", &liczba);
//		if (liczba > 0)
//		{
//			licznik1++;
//			suma1 += liczba;
//		}
//		else if (liczba < 0)
//		{
//			licznik2++;
//			suma2 += liczba;
//		}
//
//	}
//	printf("\nilosc liczb dodatnich: %d", licznik1);
//	
//	printf("\nilosc liczb ujemnych: %d", licznik2);
//	printf("\nsuma liczb dodatnich: %d", suma1);
//	printf("\nsuma liczb ujemnych: %d", suma2);
//
//
//
//	return 0;
//}
//zad3
//#include <stdio.h>
//int main() {
//	int N = 5;
//	int liczba = 0;
//	int suma = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("podaj liczbe: ");
//		scanf_s("%d", &liczba);
//
//		if (liczba % 2 == 0)
//		{
//			suma += liczba;
//		}
//
//	}
//	printf("\nsuma: %d", suma);
//
//	return 0;
//}
//zad4

//#include <stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//	int N = 5;
//	int liczba = 0;
//	int suma = 0;
//	srand(time(NULL));       //komeda do ustawiania losowosci liczb
//	for (int i = 0; i < N; i++)
//	{
//		liczba = rand() % 56 - 10;     //formu³a na losowanie zwyk³ego przedzia³u (jako pierwsze piszemy ilosc liczb(³acznie z zrem w tym przypadku) a jako drugie wartosc minimaln¹ tych liczb)
//		if (liczba % 2 == 0)
//		{
//			suma += liczba;
//		}
//		printf("%d\t", liczba);
//	}
//	printf("\nsuma: %d", suma);
//
//
//
//
//	return 0;
//}

//zad5


//#include <stdio.h>
//int main() {
//	int N = 0;
//	int liczba = 0;
//	int licznik = 0;
//	float suma = 0;
//	float srednia = 0;
//	printf("podaj liczbe studentow: ");
//	scanf_s(" %d", &N);
//	while (licznik<N)
//	{
//		printf("podaj liczba pkt dla studenta: ");
//		scanf_s(" %d", &liczba);
//		licznik++;
//		suma += liczba;
//	}
//	srednia = suma / licznik;
//	printf("\n srednia:%f ", srednia);
//
//
//
//
//	return 0;
//}
//zad6
//#include <stdio.h>
//int main(){
//	for (int i = 1; i <= 100; i++) //jak ide w góre mam 2 plusy
//	{
//		printf("\t%d", i);
//	}
//	printf("\nkolejna petla: ");
//	for (int i = 100; i >= 0; i--) // jak ide w dó³ mam dwa minusy
//	{
//		printf("\t%d", i);
//	}
//	printf("\nkolejna petla: ");
//	for (int i = 7; i <= 77; i+=7) // zmieniamy wartosci przy i
//	{
//		printf("\t%d", i);
//	}
//
//	printf("\nkolejna petla: ");
//	for (int i = 20; i >= 0; i -= 2) // zmieniamy wartosci przy i
//	{
//		printf("\t%d", i);
//	}
//
//
//
//	return 0;
//}