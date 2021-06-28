#include<iostream>
using namespace std;

#define tab "\t";

void Line(const int y)
{
	for (int i = 0; i < y; i++)
	{
		cout << "-";
	}
	cout << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

int Sum(int arr[], const int n, int s)
{
	for (int i = 0; i < n; i++)
	{
	s = s + arr[i];
	}
	cout <<  "Sum = " << s << endl; 
	return s;
}

double Avg(int arr[], const int n, int avg, int arif)
{
	for (int i = 0; i < n; i++)
	{
		arif = arif + arr[i];
	}
	avg = arif / n;
	cout << "Avg = " << avg << endl;
	return avg;
}

int minValueIn(int arr[], const int n, int min)
{
	 min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Min Value is: " << min << endl;
	return min;
}

int maxValueIn(int arr[], const int n, int max)
{
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Max Value is: " << max << endl;
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions";  cout << endl; cout << endl;
	const int n = 5;
	int arr[n];
	const int y = 100;
	int s = 0;
	int arif = 1;
	int avg = 1;
	int min = 0;
	int max = 0;
	Line(y); 
	FillRand(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n, s); cout << endl;
	Avg(arr, n, avg, arif); cout << endl;
	minValueIn(arr, n, min); cout << endl;
	maxValueIn(arr, n, max); cout << endl;
	int number_of_shifts;
	cout << "Enter number of Shifts: "; cin >> number_of_shifts; cout << endl;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n); 
	Line(y);

	////////////////////////////////////////

	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Sort(brr, m);
	Print(brr, m);
	Sum(brr, m, s); cout << endl;
	Avg(brr, m, arif, avg); cout << endl;
	minValueIn(brr, m, min); cout << endl;
	maxValueIn(brr, m, max); cout << endl;
	cout << "Inter number of Shifts: ";  cin >> number_of_shifts; cout << endl;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	Line(y);
	cout << "I finally got it!" << endl;
}
 /*В проект добавить функции:
??? Sum(???) возвращает сумму элементов массива
??? Avg      возвращает ср.арифметическое элементов массива
minValueIn   возвращает минимальное значение эл. массива
maxValueIn   возвращает максимальное значение эл. массива
Sort         Сортирует массив*/