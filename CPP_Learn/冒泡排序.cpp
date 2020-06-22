#if 0
/**/
#include <stdio.h>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//进行排序
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//打印结果
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	cin.get();
	return 0;
}


#endif // 0
