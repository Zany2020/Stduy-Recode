#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



void Quick_Sort(int* s, int start, int end)
{
	if (start >= end)
		return;

	int left = start;
	int right = end;
	int mark = s[left];

	while (left < right)
	{
		while (left < right && s[right] >= mark)
		{
			right--;
		}
		if (right > left)
		{
			s[left++] = s[right];
		}

		while (left < right && s[left] <= mark)
		{
			left++;
		}
		if (left < right)
		{
			s[right--] = s[left];
		}
	}

	s[left] = mark;


	Quick_Sort(s, start, left - 1);
	Quick_Sort(s, left + 1, end);

}

int main()
{
	int number = 0;
	scanf("%d", &number);

	int arr[1000] = { 0 };
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	Quick_Sort(arr, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}