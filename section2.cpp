#include<stdio.h>
#include<stdlib.h>


void sort(int arr[], int len);

int main()
{
	const int n = 10;
	int a[n] = {1,3,2,5,4,1,11,7,9,13};

	//�������������
	sort(a, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

//�������������,����ð�ݼӵݹ�
void sort(int arr[], int len)
{
	//��������n-1����ʱֹͣ�ݹ�
	if (len == 1)
		return;


	for (int i = 0; i < len-1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}

	sort(arr, len - 1);
}