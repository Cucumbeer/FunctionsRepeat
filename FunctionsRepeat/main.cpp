#include<iostream>
using namespace std;
//Прототипы =>  *.h - файл
//Реализации => *.cpp - файл

#define tab "\t";

void Line(const int y);    //прототип функции или объявление функции (Funtion declaration)

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);  
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(float arr[], const int n);

void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
void ShiftLeft(char arr[], const int n, const int number_of_shifts);
void ShiftLeft(float arr[], const int n, const int number_of_shifts);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);

double Avg(int arr[], const int n); 
double Avg(double arr[], const int n); 
double Avg(float arr[], const int n); 

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions";  cout << endl; cout << endl;
	const int n = 5;
	int arr[n];
	const int y = 100;
	int min = 1;
	int max = 1;
	Line(y); 
	FillRand(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Sum of elements is: " << Sum(arr, n) << endl; cout << endl;
	cout << "Avg is: " << Avg(arr, n) << endl; cout << endl;
	cout << "Min Value is: " << minValueIn(arr, n) << endl; cout << endl;
	cout << "Max Value is: " << maxValueIn(arr, n) << endl; cout << endl;
	int number_of_shifts;
	cout << "Enter number of Shifts: "; cin >> number_of_shifts; cout << endl;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n); 
	Line(y);

	////////////////////////////////////////

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Sort(brr, m);
	Print(brr, m);
	cout << "Sum of elements is: " << Sum(brr, m) << endl; cout << endl;
	cout << "Avg is: " << Avg(brr, m) << endl; cout << endl;
	cout << "Min Value is: " << minValueIn(brr, m) << endl; cout << endl;
	cout << "Max Value is: " << maxValueIn(brr, m) << endl; cout << endl;
	cout << "Inter number of Shifts: ";  cin >> number_of_shifts; cout << endl;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	Line(y);

	/////////////////////////////////////////////////////////
	const int k = 10;
	char krr[k];
	FillRand(krr, k);
	Print(krr, k);
	Line(y);
	cout << "Inter number of Shifts: ";  cin >> number_of_shifts; cout << endl;
	ShiftLeft(krr, k, number_of_shifts);
	Print(krr, k);
	Line(y);
	cout << "I finally got it!" << endl;
}


void Line(const int y)  //Реализация функции (Funtion definition)
{
	for (int i = 0; i < y; i++)
	{
		cout << "-";
	}
	cout << endl;
}

void FillRand(int arr[], const int n, int minRand ,int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; cout << endl;
}
void Print(float arr[], const int n)
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
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	int sum = 0;	
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

void Sort(int arr[], const int n)  //Сортировка выбором (Selection sort)
{
	for (int i = 0; i < n; i++)
	{
		//счетчик 'i' ВЫБИРАЕТ элем, в который нужно поместить минимальное значение
		for (int j = i + 1; j < n; j++)
		{
			//счетчик 'j' ПЕРЕБИРАЕТ правую часть в поисках минимального значения. 
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)  //Сортировка выбором (Selection sort)
{
	for (int i = 0; i < n; i++)
	{
		//счетчик 'i' ВЫБИРАЕТ элем, в который нужно поместить минимальное значение
		for (int j = i + 1; j < n; j++)
		{
			//счетчик 'j' ПЕРЕБИРАЕТ правую часть в поисках минимального значения. 
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)  //Сортировка выбором (Selection sort)
{
	for (int i = 0; i < n; i++)
	{
		//счетчик 'i' ВЫБИРАЕТ элем, в который нужно поместить минимальное значение
		for (int j = i + 1; j < n; j++)
		{
			//счетчик 'j' ПЕРЕБИРАЕТ правую часть в поисках минимального значения. 
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

 /*В проект добавить функции:
??? Sum(???) возвращает сумму элементов массива
??? Avg      возвращает ср.арифметическое элементов массива
minValueIn   возвращает минимальное значение эл. массива
maxValueIn   возвращает максимальное значение эл. массива
Sort         Сортирует массив*/