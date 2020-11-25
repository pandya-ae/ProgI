#include <iostream>
#include <stdlib.h>

using namespace std;


void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

double *Data;
double * A;
double n, temp;

void generate(int _n, const char *_file);
void read(const char *_file);   
void printArray(double arr[], int n); 
void bubbleSort(double arr[], int n);

int main()
{
    int cmp = 0, swp = 0;
	bubbleSort(A, n, cmp, swp);
	cout << cmp << " comparisons, " << swp << " swaps" << endl;
    
	srand(time(NULL));
    cout << "Amount of random numbers you want: ";
    cin >> m;
    cout << "Generating random data ..." << endl;
    generate(m, "duom.txt");
    cout << "Reading data" << endl;
    read("duom.txt");
    A = new double[n];

    for (int i = 0; i < n; i++) {
        A[i] = Data[i];
    }

    cout << "Randomly generated array" << endl;
    printArray(A, n);

    // Bubble Sort
    bubbleSort(A, n);

    cout << "Array after bubble sort" << endl;
    printArray(A, n);

    return 0;
}

void bubbleSortCounted(double arr[], int n, int& countComparisons, int& countSwaps);
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
        	countComparisons++;
			if (arr[j] > arr[j + 1])
			{
    			countSwaps++;
    			swap(&arr[j], &arr[j + 1]);
    			swapped = true;
			}
        }
    	if (swapped == false)
    	break;
    }
}

void printArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
}
