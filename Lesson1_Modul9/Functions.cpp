#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int i = 0, j = 0;
void ZappMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass + i) = -7 + rand() % 20;
}
void print_Two_Mass(int *mass, int *row, int *col)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *col;j++)
		{
			printf("%d\t", *(mass + i**col + j));
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
}
void modulMax(int *mass, int *mass2, int col, int row)
{
	int max = 0;
	for (i = 0;i < row;i++)
	{
		max = 0;
		for (j = 0;j < col;j++)
		{

			if (*(mass + j*col + i) < 0)
				*(mass + j*col + i) = *(mass + i*row + j) *-1;
			if (max < *(mass + j*col + i))
				max = *(mass + j*col + i);
			*(mass2 + i) = max;
		}
	}
}
void print_One_Mass(int *mass, int*row)
{
	for (i = 0;i < *row;i++)
	{
		printf("%d\t", *(mass + i));
	}
	printf("\n");
}
void modul2Max(int *mass, int *mass3, int col, int row)
{
	int max = 0;
	for (i = 0;i < row;i++)
	{
		max = 0;
		for (j = 0;j < col;j++)
		{

			if (*(mass + i*col + j) < 0)
				*(mass + i*col + j) *= -1;
			if (max < *(mass + i*col + j))
				max = *(mass + i*col + j);
			*(mass3 + i) = max;
		}
	}
}
void chetElement_Col(int*mass, int *mass2, int col, int row)
{
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{

			if (*(mass + j*col + i) % 2 == 0)
			{
				*(mass2 + i) = *(mass + j*col + i);
				break;
			}

		}
	}
}
void nechet_Elemet_str(int*mass, int *mass2, int col, int row)
{
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{

			if (*(mass + i*col + j) % 2 != 0)
				*(mass2 + i) = *(mass + i*col + j);
		}
	}
}
void search_Element(int*mass, int *mass2, int col, int str)
{
	int chek = 0;
	int search = 0;
	printf("введите число для проверки: ");
	scanf("%d", &search);
	for (i = 0;i < str;i++)
	{
		chek = 0;
		for (j = 0;j < col;j++)
		{

			if (*(mass + j*col + i) > search)
				chek++;
		}
		*(mass2 + i) = chek;
	}
	print_One_Mass(mass2, &col);
}
void summ_Elemnt(int*mass, int *mass2, int col, int str)
{
	int summ = 0;
	int search = 0;
	printf("введите число для проверки: ");
	scanf("%d", &search);
	for (i = 0;i < str;i++)
	{
		summ = 0;
		for (j = 0;j < col;j++)
		{

			if (*(mass + i*col + j) > search)
				summ += *(mass + i*col + j);
		}
		*(mass2 + i) = summ;
	}
	print_One_Mass(mass2, &col);
}
void krat3(int *mass, int *mass2, int col, int str)
{
	int chek = 1;
	for (i = 0;i < str;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (*(mass + i*col + j) % 3 == 0)
			{
				mass2 = (int*)realloc(mass2,  sizeof(int)*(chek+1));
				*(mass2 + chek) = *(mass + i*col + j);
				chek++;
			}
		}
	}
	chek--;
	print_One_Mass(mass2, &chek);
}
void summ(int *mass,int row)
{
	int summa = 0;
	for (i = 0;i < row;i++)
	{
		if (*(mass + i) % 2 == 0)
			summa += *(mass + i);
	}
	printf("сумма четных элементов = %d\n", summa);
}
void Search_Min(int *mass, int row)
{
	int min = *mass;
	for (i = 0;i < row;i++)
	{
		if (min > *(mass + i))
			min = *(mass + i);
	}
	printf("Минимальное число массива = %d\n", min);
}
void Srednee(int *mass, int*row)
{
	float summ = 0;
	for (i = 0;i < *row;i++)
	{
		summ += *(mass + i);
	}
	printf("среднее арифмитическое = %2.2f\n", summ / i);
}
void pol_Number (int *mass, int*row)
{
	int chek = 0;
	for (i = 0;i < *row;i++)
	{
		if (*(mass + i) >= 0)
			chek++;
	}
	printf("неотрицательных элементов = %d\n", chek);
}
void otr_Element(int *mass, int *row)
{
	int index = 0;
	for (i = 0;i < *row;i++)
	{
		if (*(mass + i) < 0)
			index = i;
	}
	printf("индекс последнего отрицательного элемента = %d", index);
}