#include <string.h>
#include <iostream>

using namespace std;

void BaseLevel()
{
	//Дан массив символов. Преобразовать ее, удалив каждый символ * и
	//повторив каждый символ, отличный от *.
	int k = 0, i = 0;
	char m[] = "abc:defg";
	do {
		i++;
		k++;
	} while ((m[i] != ':'));
	cout << k << " symbols precede << : >> " << endl;
}
void MiddleLevel()
{
	//Дан массив символов. Преобразовать ее, удалив каждый символ * и
	//повторив каждый символ, отличный от * .

	char* m = new char[56];
	char* m1 = new char[56];
	int k = 0;
	cout << "Enter the array: ";
	cin >> m;
	for (int i = 0; i < strlen(m); i++)
	{

		if (m[i] != '*')
		{
			m1[k] = m[i];
			m1[++k] = m[i];
			k++;
		}
	}
	for (size_t i = 0; i < k; i++) {
		cout << m1[i];
	}
	cout << endl;
}

int main() {
	BaseLevel();
	MiddleLevel();
	return 0;
}