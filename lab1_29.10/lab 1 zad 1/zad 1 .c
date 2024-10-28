//zad 1
#include <stdio.h>
int main()
{
	printf("mg134911@stud.ur.edu.pl\n");



	return 0;
}


//zad 2
#include <stdio.h>
int main()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf_s("%d", &liczba);
	if (liczba % 2 == 0) {
		printf("Liczba %d jest parzysta.\n", liczba);
	}
	else {
		printf("Liczba %d jest nieparzysta\n", liczba);
	}




	return 0;
}
//zad 3
#include <stdio.h>
int main()
{
	float liczba1, liczba2;
	printf("Podaje pierwsza liczbe : ");
	scanf_s("%f", &liczba1);
	printf("Podaje druga liczbe : ");
	scanf_s("%f", &liczba2);


	if (liczba1 > liczba2) {
		printf("Liczba %.2f jest wieksza od %.2f.\n", liczba1, liczba2);
	}
	else if (liczba2 > liczba1) {
		printf("Liczba %.2f jest wieksza od %.2f.\n", liczba2, liczba1);
	}
	else {
		printf("Obie liczby sa rowne: %.2f.\n", liczba1);
	}





	return 0;
}
//zad 4
#include <stdio.h>
int main()
{
	float liczba1, liczba2, liczba3, liczba4;
	float suma, srednia;

	printf("Podaj pierwsza liczbe : ");
	scanf_s("%f", &liczba1);
	printf("Podaj druga liczbe : ");
	scanf_s("%f", &liczba2);
	printf("Podaj trzecia liczbe : ");
	scanf_s("%f", &liczba3);
	printf("Podaj czwarta liczbe : ");
	scanf_s("%f", &liczba4);
	suma = liczba1 + liczba2 + liczba3 + liczba4;
	srednia = suma / 4;

	printf("Srednia arytmetyczna wynosi: %.2f\n", srednia);


	return 0;
}
//zad 5
#include <stdio.h>
int main()

{
	int liczba1, liczba2, wynik;
	char operator;


	printf("Podaj liczbe: ");
	scanf_s("%d", &liczba1);
	printf("Podaj operator(+, -, *, /): ");
	scanf_s(" %c", &operator);
	printf("Podaj liczbe: ");
	scanf_s("%d", &liczba2);

	switch (operator){
	case'+':
		wynik = liczba1 + liczba2;
		printf("Wynik: %d + %d = %d\n", liczba1, liczba2, wynik);
		break;
	case '-':
			wynik = liczba1 - liczba2;
			printf("Wynik: %d - %d = %d\n", liczba1, liczba2, wynik);
			break;
	case '*':
				wynik = liczba1 * liczba2;
				printf("Wynik: %d * %d = %d\n", liczba1, liczba2, wynik);
				break;
	case '/':
				if (liczba2 != 0) {
					wynik = liczba1 / liczba2;
					printf("Wynik: %d / %d = %d\n", liczba1, liczba2, wynik);
				}
				else {
					printf("Blad: Nie mozna dzielic przez zero.\n");
				}
				break;
	}

				return 0;






}