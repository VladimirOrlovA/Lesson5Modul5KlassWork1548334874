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

	/*const int ind = 3;
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
	{
		for (j = 0; j < ind; j++)
		{
			s += a[i][j];
		}

		b[i][j]=s


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

	
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int A[ind][ind] = { 0 }, count = 0;

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			A[i][j] = 10 + rand() % 40;

			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}


	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind-1; j++)

		{
			if (A[i][j] == A[i][j + 1])
			{
				count++;
			}
		}

		if (count == 0)
		{
			for (int j = 0; j < ind; j++)
			{
				A[i][j] = 0;
			}
		}
		count = 0;
	}

	printf("\n__________________________________\n\n");

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			printf("%d\t", A[i][j]);
		}
		printf("\n\n");
	}
	
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int A[ind][ind] = { 0 }, i, j, count = 0, min=100;

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			A[i][j] = 1 + rand() % 9;

			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			if (A[i][j] < min)
			{
				min = A[i][j];
			}
		}

		if (A[i][i] == min)
		{
			for (j = 0; j < ind; j++)
				A[i][j] = 0;
		}
		min = 100;
	}

	printf("\n\n-----------------------------------\n\n");

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}
	
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int A[ind][ind] = { 0 }, i, j, count = 0, s=5;

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			A[i][j] = 1 + rand() % 9;

			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}

	printf("\n\n--------------------------------------------\n\n");

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			if (A[i][j] == s) count++;
		}	
	}

printf("\n %d", count);


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