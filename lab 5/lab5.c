#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//ZADANIE 1
//int silnia(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//
//	}
//	return silnia(n - 1) * n;
//}
//int main()
//{
//	int n;
//
//	printf("Podaj n dla ktorego obliczymy silnie: \n");
//	scanf_s("%d", &n);
//
//	if (n < 0)
//	{
//		printf("Silnia nie jest liczona dla liczb ujemnych \n");
//	}
//	else {
//		printf("Silnia liczby %d n wynosi: %d\n", n, silnia(n));
//	}
//	return 0;
//}
//zadanie 2
//int wyraz(int n)
//{
//	if (n == 1)
//	{
//		return -1;
//	}
//	
//	if (n > 1)
//	{
//		return -wyraz(n - 1) * (n - 2);
//	}
//
//}
//
//int main()
//{
//	int n;
//
//	printf("Podaj wyraz: \n");
//	scanf_s("%d", &n);
//
//	int wynik = wyraz(n);
//	printf("%d wyraz ciagu to: %d\n", n, wynik);
//
//
//	return 0;
//}
//zadnie 3
//int NWD(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//
//	return NWD(b, a % b);
//}
//
//int main()
//{
//	int a;
//	int b;
//
//	printf("Podaj dwie liczby: \n");
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//
//	printf("Najwiekszy wspolny dzielnik liczby %d oraz liczby %d wynosi: %d \n", a, b, NWD(a, b));
//	return 0;
//}
//zadanie 4 
//int wynik(int i)
//{
//	if (i < 3)
//	{
//		return 1;
//	}
//	else {
//
//		if (i % 2 == 0)
//		{
//
//			return  wynik(i - 3) + wynik(i - 1) + 1;
//		}
//		else {
//			return wynik(i - 1) % 7;
//		}
//	}
//}
//
//int main()
//{
//	int i;
//	scanf_s("%d", &i);
//	printf("%d", wynik(i));
//	return 0;
//	//1 - 1
//	//2 - 1
//	//3 - 1
//	//4 - 3
//	//5 - 3
//	//6 - 5
//	//7 - 5
//	//8 - 9
//}
//zadanie 5
//int konwersja(int n)
//{
//	if (n > 1)
//	{
//		konwersja(n / 2);
//	}
//	printf("%d", n % 2);
//}
//
//int main()
//{
//	int liczba;
//
//	printf("Podaj liczbe do zamiany na system dwojkowy: \n");
//	scanf_s("%d", &liczba);
//
//	if (liczba == 0)
//	{
//		printf("Liczba w systemie dziesietnym wynosi: 0 \n");
//		printf("Liczba w systemie dwojkowym wynosi: 0 \n");
//		return 1;
//	}
//
//	printf("Liczba %d w systemie dziesietnym wynosi: \n", liczba);
//	printf("Liczba w systemie dwojowym wynosi: \n");
//	konwersja(liczba);
//
//	return 0;
//}
//zadanie 6
//int Fibonacci(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n > 1)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//
//int main()
//{
//	int n;
//
//	printf("Podaj numer wyrazu w ciagu Fibonacciego: \n");
//	scanf_s("%d", &n);
//	if (n < 0)
//	{
//		printf("Wyraz ciagu Fibonacciego nie moze byc mniejszy od 0 ! \n");
//	}
//	else {
//		printf("%d wyraz ciagu Fibonacciego wynosi: %d \n", n, Fibonacci(n));
//	}
//	return 0;
//}
//zadanie 7
//int konwersja(int n)
//{
//	if (n > 1)
//	{
//		konwersja(n / 2);
//	}
//	printf("%d", n % 2);
//}
//
//int main()
//{
//	int liczba;
//
//	printf("Podaj liczbe do zamiany na system dwojkowy: \n");
//	scanf_s("%d", &liczba);
//
//	if (liczba == 0)
//	{
//		printf("Liczba w systemie dziesietnym wynosi: 0 \n");
//		printf("Liczba w systemie dwojkowym wynosi: 0 \n");
//		return 1;
//	}
//
//	printf("Liczba %d w systemie dziesietnym wynosi: \n", liczba);
//	printf("Liczba w systemie dwojowym wynosi: \n");
//	konwersja(liczba);
//
//	return 0;
//}
//zadanie 8
//int funkcja(int x, unsigned int n)
//{
//	if (n == 1)
//	{
//		return x;
//	}
//	else {
//		if (n % 3 == 0)
//		{
//			int k = funkcja(x, n / 3);
//			return k * k * k;
//		}
//		else {
//			return x * funkcja(x, n - 1);
//		}
//	}
//}
//
//int main()
//{
//	int x;
//	unsigned int n;
//
//	printf("Podaj x: \n");
//	scanf_s("%d", &x);
//	printf("Podaj n: \n");
//	scanf_s("%d", &n);
//
//	if (n < 0)
//	{
//		printf("n jest dodatnia liczba calkowita! \n");
//	}
//
//	printf("Wykonania rekurencyjne wynik dla %d, %d wynosi: %d", x, n, funkcja(x, n));
//
//	return 0;
//}