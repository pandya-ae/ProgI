//bubbleSorting 4 variations and selectionSort Comparson //with time
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;  

void basicBubble(int* arr,int size);
void OPs(int* arr,int size);
void flagBreakBubble(int * arr, int size);
void indexBubble(int* arr, int size);
void selectionSort (int ar[], int size);
using namespace std;
int main()
{
	srand(time(NULL));
	int size = 12000; ////////////// size ///
	cout << "elements = " << size << "\n\n";
	int *ar1= new int[size];
	int *ar2= new int[size];
	int *ar3= new int[size];
	int *ar4= new int[size];
	int *ar5= new int[size];

	clock_t t0, t1, t2, t3, t4, t5, t6;
	t0 = clock();

	for (int i = 0, n; i < size; i++)
	{
		n = rand()% 25000;
		ar1[i] = n;
		ar2[i] = n;
		ar3[i] = n;
		ar4[i] = n;
		ar5[i] = n;
	}
	t1 = clock();

 basicBubble(ar1, size);   
	t2 = clock();
 OPs(ar2, size);   
	t3 = clock();
 flagBreakBubble(ar3, size);  
	t4 = clock();
 indexBubble(ar4, size);
	t5 = clock();
 selectionSort(ar5, size);
 	t6 = clock();	

 cout << "\nTime Test:\n"
	<< "settingTime     " << double(t1-t0) / CLOCKS_PER_SEC << " sec\n"
	<< "basicBubble     " << double(t2-t1) / CLOCKS_PER_SEC << " sec\n" 
	<< "OPs             " << double(t3-t2) / CLOCKS_PER_SEC << " sec\n"
	<< "flagBreakBubble " << double(t4-t3) / CLOCKS_PER_SEC << " sec\n"
	<< "indexBubble     " << double(t5-t4) / CLOCKS_PER_SEC << " sec\n"
	<< "selectionSort   " << double(t6-t5) / CLOCKS_PER_SEC << " sec\n";

 delete[] ar1;
 delete[] ar2;
 delete[] ar3;
 delete[] ar4;
 delete[] ar5;

return 0;
}

void basicBubble(int* arr,int size)  //conventional
{
	int comparisons(0),swaps(0);
	for( int i = 0; i < size; i++ )
	{
		for(int j=0; j<size; j++) ///if j<size-1; comparison= comparison-size;
		{
			comparisons++;
			if(arr[j] < arr[i])
			{
				swap(arr[j],arr[i]);
				swaps++;
			}
		}
	}
cout << "basicBubble: Comparisons: " << comparisons << ", Swaps: " << swaps << "\n";
return;
}

void OPs(int* arr,int size) //as OPs
{
	int flag=0,comparisons(0),swaps(0);
	while (flag < size)
	{
		for (int i=1; i < size; i++)
		{
			comparisons++;
			if (arr[i-1] > arr[i])
			{
				swap(arr[i-1],arr[i]);
				swaps++;
			}
		}
		flag++;
	}
cout << "OPs: Comparisons: " << comparisons << ", Swaps: " << swaps << "\n";
return;
}

void flagBreakBubble(int * arr, int size) //PCrumley48 (1)
{
	int comparisons(0),swaps(0);
	bool swapped = true;
	while (swapped)
	{
		swapped = false;
		for (int i = 0; i < size-1;i++)
		{
			comparisons++;
			if (arr[i+1] < arr[i])
			{
				swap(arr[i],arr[i+1]);
				swaps++;
				swapped = true;
			}
		}
	}
cout << "flagbreakbubble: Comparisons: " << comparisons << ", Swaps: " << swaps << "\n";
return;	
}

void indexBubble(int* arr, int size) //PCrumley48 (2)
{
	int comparisons(0),swaps(0),swapindex(size),index(size);
	bool swapped = true;
	while (swapped)
	{
		swapped = false;
		swapindex = index;
		for (int i = 0; i < swapindex-1;i++)
		{
			comparisons++;
			if (arr[i+1] < arr[i])
			{
				swap(arr[i],arr[i+1]);
				swaps++;
				swapped = true;
				index = i+1;
			}
		}
	}
cout << "indexBubble: Comparisons: " << comparisons << ", Swaps: " << swaps << "\n";
return;
}

void selectionSort (int ar[], int size) /// selectionSort()
{ 
	int comparisons= 0, swaps= 0;
	for ( int i = 0; i < size; i++ )
	{		
		int indexPos = i;
		for(int j=i+1; j<size; j++)
		{
			comparisons++;
			if (ar[j] < ar[indexPos])			
				indexPos = j;			
		}
		
		if(ar[indexPos] != ar[i])
			{
				swaps++;
				swap(ar[indexPos] , ar[i]);
			}

	}
cout << "selectionSort: Comparisons: " << comparisons << ", Swaps: " << swaps << "\n";
return;	
}
