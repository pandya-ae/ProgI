#include <iostream>
#include <cstdlib>
using namespace std;

const int n = 5000;

void insertionsort (int list3[n])
{
	int i, key, j, comparison3 = 0, assignment3 = 0; 
	cout << "INSERTION SORT" << endl; 
    for (i = 1; i < n; i++) 
    {  
        key = list3[i];
		assignment3++;  
        j = i - 1;  
        while (j >= 0 and list3[j] > key) 
        {  
            comparison3++;
			list3[j + 1] = list3[j];  
            j = j - 1; 
            assignment3++;
        }  
        list3[j + 1] = key;
		assignment3++;    
    }
    cout << "Comparisons: " << comparison3 << endl;
    cout << "Assignments: " << assignment3 << endl;
}

void selectionsort (int list2[n])
{
	int temp, min_index, comparison2 = 0, assignment2 = 0;
	cout << "SELECTION SORT" <<endl;
	for(int i = 0; i < n - 1; i++)
	{
		min_index=i;
		for(int j = i + 1; j < n; j++)
		{
			comparison2++;
			if (list2[j] < list2[min_index])
			{
				min_index = j;
			}	
		}
		temp = list2[i];
		list2[i] = list2[min_index];
		list2[min_index] = temp;
		assignment2+=3;
	}
	cout << "Comparisons: " << comparison2 << endl;
	cout << "Assignments: " << assignment2 << endl;
	cout << endl;	
}

void bubblesort (int list1[n])
{
	int temp, comparison1 = 0, assignment1 = 0;
	cout << "BUBBLE SORT" << endl;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			comparison1++;
			temp = list1[j];
			if (list1[j] > list1[j+1])
			{
				list1[j] = list1[j+1];
				list1[j+1] = temp;
				assignment1+=3;
			}
		}
	}
	cout << "Comparisons: " << comparison1 <<endl;
	cout << "Assignments: " << assignment1 <<endl;
	cout << endl;	
}

int main()
{
	int list1[n], list2[n], list3[n];
	for(int i = 0; i < n; i++)
	{
		list1[i] = (rand()%5000);
		list2[i] = list1[i];
		list3[i] = list1[i];
	}
	bubblesort(list1);
	selectionsort(list2);
	insertionsort(list3);
return 0;
}
