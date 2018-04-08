#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, quit;
	do
	{
		printf("Введите номер заадния: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.Дан двумерный массив целых чисел
++a.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующего столбца двумерного массива
++b.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующей строки двумерного массива*/
			int *mass = NULL;
			int *mass2 = NULL;
			int *mass3 = NULL;
			int row = 16;
			int col = 4;
			int str = 4;
			mass = (int*)calloc(row, sizeof(int));
			if (mass == NULL)
			{

				printf("память не выделена!");
				exit(0);
			}
			else
			{
				ZappMass(mass, &row);
				print_Two_Mass(mass, &str, &col);
				mass2 = (int*)calloc(col, sizeof(int));
				if (mass2 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					modulMax(mass, mass2, col, str);
					print_One_Mass(mass2, &col);
				}
				mass3 = (int*)calloc(str, sizeof(int));
				if (mass3 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					modul2Max(mass, mass3, col, str);
					print_One_Mass(mass3, &str);
				}
			}
			free(mass);
			free(mass2);
			free(mass3);
		}
		break;
		case 2:
		{
			/*2.Дан двумерный массив целых чисел
++a.Сформировать одномерный массив, каждый элемент которого равен первому четному элементу соответствующего столбца двумерного массива (если такого элемента в столбце нет, то он равен нулю).
++b.Сформировать одномерный массив, каждый элемент которого равен последнему нечетному элементу соответствующей строки двумерного массива (если такого элемента в строке нет, то он равен нулю).*/
			int *mass = NULL;
			int *mass2 = NULL;
			int *mass3 = NULL;
			int row = 16;
			int col = 4;
			int str = 4;
			mass = (int*)calloc(row, sizeof(int));
			if (mass == NULL)
			{

				printf("память не выделена!");
				exit(0);
			}
			else
			{
				ZappMass(mass, &row);
				print_Two_Mass(mass, &str, &col);
				mass2 = (int*)calloc(col, sizeof(int));
				if (mass2 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					chetElement_Col(mass, mass2, col, str);
					print_One_Mass(mass2, &col);
				}
				mass3 = (int*)calloc(str, sizeof(int));
				if (mass3 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					nechet_Elemet_str(mass, mass3, col, row);
					print_One_Mass(mass3, &str);
				}
			}
			free(mass);
			free(mass2);
			free(mass3);
		}
		break;
		case 3:
		{
			/*3.Дан двумерный массив.
++a.Сформировать одномерный массив, каждый элемент которого равен количеству элементов соответствующего столбца двумерного массива, больших данного числа
++b.Сформировать одномерный массив, каждый элемент которого равен сумме элементов соответствующей строки двумерного массива, меньших данного числа.*/
			int *mass = NULL;
			int *mass2 = NULL;
			int *mass3 = NULL;
			int row = 16;
			int col = 4;
			int str = 4;
			mass = (int*)calloc(row, sizeof(int));
			if (mass == NULL)
			{

				printf("память не выделена!");
				exit(0);
			}
			else
			{
				ZappMass(mass, &row);
				print_Two_Mass(mass, &str, &col);
				mass2 = (int*)calloc(col, sizeof(int));
				if (mass2 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					search_Element(mass, mass2, col, str);

				}
				mass3 = (int*)calloc(str, sizeof(int));
				if (mass3 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{
					summ_Elemnt(mass, mass3, col, str);
				}
			}
			free(mass);
			free(mass2);
			free(mass3);
		}
		break;
		case 4: // через функцию не работает функция calloc
		{
			/*4.Дан двумерный массив размером N x M, заполненный целыми числами
a.Все его элементы, кратные трем, записать в одномерный массив.
b.Все его положительные элементы записать в один одномерный массив, а остальные — в другой*/
			int *mass = NULL;
			int *mass2 = NULL;
			int *mass3 = NULL;
			int row = 16;
			int col = 4;
			int str = 4;
			mass = (int*)calloc(row, sizeof(int));
			if (mass == NULL)
			{

				printf("память не выделена!");
				exit(0);
			}
			else
			{
				ZappMass(mass, &row);
				print_Two_Mass(mass, &str, &col);
				mass2 = (int*)calloc(1, sizeof(int));
				if (mass2 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{

					krat3(mass, mass2, col, str);
				}
				mass3 = (int*)calloc(str, sizeof(int));
				if (mass3 == NULL)
				{
					printf("память не выделена!");
					exit(0);
				}
				else
				{

				}
			}
			free(mass);
			free(mass2);
			free(mass3);
		}
		break;
		case 5:
		{
			/*5.Ввести целые числа. Создать из них массив. Вычислить сумму чётных элементов массива*/
			int *mass = NULL;
			int i = 0;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
				printf("No memmory");
			else
			{
				int a;
				do
				{
					if (scanf("%d", &a) == 0)
					{
						break;
					}
					else
					{
						*(mass + i) = a;
						i++;
						mass = (int*)realloc(mass, sizeof(int) * (i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				summ(mass, i);
			}
			free(mass);
		}
		break;
		case 6:
		{
			/*6.Ввести целое число N и массив из N вещественных чисел. Определить количество отрицательных элементов массива*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				int chek = 0;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{
						*(mass + i) = a;
						if (*(mass + i) < 0)
							chek++;
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				printf("колличество отрицательных элементов = %d\n", chek);
			}
		}
		break;
		case 7:
		{
			/*7.Ввести целое число N. Создать массив из N вещественных чисел. Вычислить произведение элементов, модуль которых меньше 7.*/
			int proiz = 1;
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{
						*(mass + i) = a;
						if (*(mass + i) < 0)
							*(mass + i) *= -1;
						if (*(mass + i) < 7)
							proiz *= *(mass + i);
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				printf("произведение элементов = %d\n", proiz);
			}
		}
		break;
		case 8:
		{
			/*8.Ввести вещественные числа. Создать из них массив определить наибольший элемент массива*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				int max = 0;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{

						*(mass + i) = a;
						if (*(mass + i) > max)
							max = *(mass + i);
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				printf("МАКСИМАЛЬНЫЙ ЭЛЕМЕНТ = %d\n", max);
			}
		}
		break;
		case 9:
		{
			/*9.Ввести целое число N и массив из N целых чисел. Определить наименьший элемент массива*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{

						*(mass + i) = a;
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				Search_Min(mass, i);
			}
		}
		break;
		case 10:
		{
			/*10.Ввести вещественные числа. Создать из них массив. Определить среднее арифметическое элементов массива.*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{

						*(mass + i) = a;
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				Srednee(mass, &i);
			}
		}
		break;
		case 11:
		{
			/*11.Ввести вещественные числа. Создать из них массив. Определить количество неотрицательных элементов массива*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{

						*(mass + i) = a;
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				pol_Number(mass, &i);
			}
		}
		break;
		case 12:
		{
			/*12.Ввести целое число N и массив из N вещественных чисел. Определить индекс последнего отрицательного элемента массива*/
			int *mass = NULL;
			mass = (int*)calloc(1, sizeof(int));
			if (mass == NULL)
			{
				printf("No memmory");
				exit(0);
			}
			else
			{
				int i = 0, a;
				do
				{
					if (scanf("%d", &a) == 0)
						break;
					else
					{

						*(mass + i) = a;
						i++;
						mass = (int*)realloc(mass, sizeof(int)*(i + 1));
					}
				} while (true);
				print_One_Mass(mass, &i);
				otr_Element(mass, &i);
			}
		}
		break;
		case 13:
		{
			/**/
		}
		break;
		default:printf("нет такого задания\n");
			break;
		}
		printf("продолжить 1-да 2-нет: ");
		scanf("%d", &quit);
	} while (quit == 1);
}