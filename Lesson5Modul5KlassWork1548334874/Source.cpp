#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson5Modul5KlassWork1548334874


void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 5;
	int arr[ind][ind], i, j, s = 1;

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = 1 + rand() % 7;
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	
	for (j = 0; j < ind; j++)
	{
		s *= arr[0][j];
	}

	printf("\nПроизведение элементов первой строки : %d", s);
	   	 
}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 3;
	int a[ind][ind], b[ind][ind],  i, j, max=0, s=0;

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			a[i][j] = 1 + rand() % 7;
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	

	for (i = 0; i < ind; i++)
		s += a[i][j];
			
			
		}
		printf("\n");
	}




















	/*const int ind = 5;
	int arr[ind][ind], i, j, max=0, s=0;

	for (i = 0; i < ind; i++)
	{
		for (j = 1; j < ind; j++)
		{
			arr[i][j] = 1 + rand() % 7;
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n----------------\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 1; j < ind; j++)
		{
			s += arr[i][j];

		}
		
		arr[i][0] = s;
		s = 0;
	}


	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}


	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			if (arr[i][j] > max) 
		}
		printf("\n");
	}



	for (i = 0; i < ind - 1; i++)			// достаточно поставить ind3-1 элементов
		for (j = ind3 - 2; j >= i; j--)		// идем с конца массива в начало
			if (arr3[j] < arr3[j + 1])		// если элементы стоят правильно, ...
			{
				c = arr3[j];				// переменная буфер
				arr3[j] = arr3[j + 1];		// перестановка arr3[j] и arr3[j + 1]
				arr3[j + 1] = c;
			}*/

}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 9;

	int arr[ind][ind] = { 0 }, i, j, x1 = 0, x2 = 0, y;

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = 10 + rand() % 15;

			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n Изменили разрядность элементов \n\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			x1 = arr[i][j] / 10;
			x2 = arr[i][j] % 10;
			y = x2 * 10 + x1;

			arr[i][j] = y;

			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}



}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 9;
	int arr[ind][ind], i, j, dec;

	printf("\n\nМатрица %d x %d со случайными числами в  8-ой системе\n\n", ind, ind);

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			dec = 11 + rand() % 53;										// генерим числа от 8 до 77 (чтобы в дес системе не вых на 3 разряд)
			arr[i][j] = ((dec / 8) * 10) + (dec - ((dec / 8) * 8));		// преобраз dec в oct и записываем в массив
			printf("%2d   ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\nПеревод исходной матрицы с элементами в 8-ой системе в 10-ую систему \n\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = (arr[i][j] / 10) * 8 + (arr[i][j] % 10);

			printf("%2d   ", arr[i][j]);

		}
		printf("\n");
	}

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int A[ind][ind] = { 0 }, count = 0, B[ind][ind] = { 0 };

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			A[i][j] = 10 + rand() % 40;

			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}

	for (int k = 0; k < ind; k++)
	{
		for (int p = 0; p < ind; p++)
		{
			count = 0;

			for (int i = 0; i < ind; i++)
			{
				for (int j = 0; j < ind; j++)
				{
					if (A[k][p] == A[i][j])// && A[k][p]!=0

						count++;
				}
			}

			if (count - 1 >= 2)

			{
				for (int i = 0; i < ind; i++)
				{
					for (int j = 0; j < ind; j++)
					{
						if (A[k][p] == A[i][j])

							B[i][j] = -1;
					}
				}
			}
		}
	}

	for (int k = 0; k < ind; k++)
	{

		for (int p = 0; p < ind; p++)

		{
			if (B[k][p] == -1)

				A[k][p] = 0;
		}

	}

	printf("\n--------------------------------\n\n");

	for (int i = 0; i < ind; i++)

	{

		for (int j = 0; j < ind; j++)

		{
			printf("%d\t", B[i][j]);
		}






		printf("\n\n");

	}


}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 6;
	int arr[ind][ind], i, j, count = 0;

	printf("\n\nМассив %d х %d из случайных чисел : \n\n", ind, ind);

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = 1 + rand() % 9;
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\nВывод индексов тех элементов, значения которых больше, \nчем у стоящих справа от него => \n\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			if (arr[i][j] > arr[i + 1][j + 1])
			{
				printf("A[%d][%d]   ", i, j);
				count++;
			}
		}
		printf("\n");
	}
	printf("\nКоличество таких чисел = %d \n\n", count);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 6;
	int arr[ind][ind], i, j, count = 0;

	printf("\n\nМассив %d х %d из случайных чисел : \n\n", ind, ind);

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = 1 + rand() % 9;
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n_____________________________________ \n\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			if (arr[i][j] > arr[i + 1][j + 1])
			{
				printf("A[%d][%d]   ", i, j);
				count++;
			}
		}
		printf("\n");
	}
	printf("\nКоличество таких чисел = %d \n\n", count);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int arr[ind][ind], i, j, d = 3;

	for (i = 0; i < ind; i++)
	{
		for (j = 0; i < ind; i++)
		{
			if (i == 0 && j == 0) arr[i][j] = 3;
			else arr[i][j] = 0;
		}

	}

}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task11()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task12()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}