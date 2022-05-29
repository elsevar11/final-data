
#include<iostream>
using namespace std;
int replace(char arr[])
{

	int spaces = 0, i=0;
	while(arr[i]){
		if (arr[i] == ' '){
		
			spaces++;
	}
		i++;
	}
	// % 2 0 3 char
	int length = i + spaces * 2 +1;
	int index = length - 1;
	int j=i-1;
	while(j>=0){		
		if (arr[j] == ' ')
		{
			arr[index - 1] = '0';
			arr[index - 2] = '2';
			arr[index - 3] = '%';
			
			index = index - 3;
		}
		else
		{
			arr[index-1] = arr[j];
			index--;
		}
		j--;	
	}
	
	return length;
}

int main()
{
	char arr[500] = "Salam Men Qasimov Elsever  asd as d asdas a ";
	int length = replace(arr);
	for (int i=0; i<length; i++){
		cout << arr[i];
	}
		
	return 0;
}

