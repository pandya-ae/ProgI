#include <iostream>
#include <time.h>
#include <stdlib.h>  
using namespace std;

void basicbubble(int* arr,int size);
void flagcounterbubble(int* arr,int size);
void flagbreakbubble(int * arr, int size);
void indexbubble(int* arr, int size);

int main()
{
	int testarray[5000],basearray[5000];
	for (int i = 0; i < 5000; i++) basearray[i] = i;
	srand(time(NULL));
	for (int i = 0; i < 5000; i++) std::swap(basearray[i],basearray[rand() % 5000]);
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5000; i++) testarray[i] = basearray[i];
		switch(j)
		{
		case 0:
			basicbubble(testarray,5000);
			break;
		case 1:
			flagcounterbubble(testarray,5000);
			break;
		case 2:
			flagbreakbubble(testarray,5000);
			break;
		case 3:;
			indexbubble(testarray,5000);
			break;
		}
	}
}

void basicbubble(int* arr,int size)
{
	int comparisons(0),swaps(0);
	for( int i = 0; i < size; i++ )
	{
		for(int j=0; j<size; j++)
		{
			comparisons++;
			if(arr[j] < arr[i])
			{
				std::swap(arr[j],arr[i]);
				swaps++;
			}
		}
	}
	cout << "Basic Bubble Sort: Comparisons: " << comparisons << ", Swaps: " << swaps << endl;
	system("Pause");
}

void flagcounterbubble(int* arr,int size)
{
	int flag=0,comparisons(0),swaps(0);
	while (flag < size)
	{
		for (int index=1; index < size; index++)
		{
			comparisons++;
			if (arr[index-1] > arr[index])
			{
				std::swap(arr[index-1],arr[index]);
				swaps++;
			}
		}
		flag++;
	}
	cout << "Flagged Bubble Sort: Comparisons: " << comparisons << ", Swaps: " << swaps << endl;
	system("Pause");
}

void flagbreakbubble(int * arr, int size)
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
				std::swap(arr[i],arr[i+1]);
				swaps++;
				swapped = true;
			}
		}
	}
	cout << "Indexed Bubble Sort: Comparisons: " << comparisons << ", Swaps: " << swaps << endl;
	system("Pause");
	
}

void indexbubble(int* arr, int size)
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
				std::swap(arr[i],arr[i+1]);
				swaps++;
				swapped = true;
				index = i+1;
			}
		}
	}
	cout << "Indexed Bubble Sort: Comparisons: " << comparisons << ", Swaps: " << swaps << endl;
	system("Pause");
}
