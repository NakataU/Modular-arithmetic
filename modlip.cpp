#include "modlip.h"

int createZn(int*& arr, int Zn)//creating new array
{

	arr = new int[Zn];
	
	for (int i = 0; i < Zn; i++)
	{
		arr[i] = i % Zn;
		
	}
	return 0;
}

int deleteZn(int*& arr)//delete arr int the end of the program
{
	if (arr != nullptr)
	{
		delete[] arr;

	}
	return 0;

}

int delete2darr(int rows,int **ar)//delete 2D arr in the end of the task 
{

	for (int i = 0; i< rows; ++i)
	{
		delete[] ar[i];
	}
	delete[] ar;
	ar = nullptr;

	return 0;
}
int change(int *arr,int *Zn) //changing the arr(Zn)
{

	int n;
	std:: cout << "Please enter new value for Zn = ";
	std::cin >> n;

	*Zn = n;

	deleteZn(arr);
	createZn(arr,n);
	return 0;
}

int fillarr(int* arr, int Zn) //fill array
{

	for (int i = 0; i < Zn; i++)
	{
		arr[i] = i % Zn;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
int Task1(int* arr, int Zn) {

	fillarr(arr, Zn);
	
	return 0;
}


int Task2(int Zn,int*arr) //+ of two elements
{
	
	fillarr(arr, Zn);
	int first,second;
	int result = 0;

	std::cout << "Enter first number = ";
	std::cin >> first;

	while (0 > first || first > (Zn - 1)) {

		std::cout << "Please enter valid first number = ";
		std::cin >> first;
	}
	std::cout << "Enter second number = ";
	std::cin >> second;
	while (0 > second || second > (Zn - 1)) {

		std:: cout << "Please enter valid second number = ";
		std::cin >> second;
	}
	result = (first + second) % Zn;
	std::cout <<  first << "+" << second << "=" << result;

	return 0;
}

int Task3(int Zn,int*arr) //- of two elements
{

	fillarr(arr, Zn);
	int first, second;
	int result = 0;

	std::cout << "Enter first number = ";
	std::cin >> first;

	while (0 > first || first > (Zn - 1)) {

		std::cout << "Please enter valid first number = ";
		std::cin >> first;
	}
	std::cout << "Enter second number = ";
	std::cin >> second;
	while (0 > second || second > (Zn - 1)) {

		std::cout << "Please enter valid second number =";
		std::cin >> second;
	}
	result = (first - second) % Zn;

	if (result < 0) {

		result += Zn;
	}
	std::cout << first << "-" << second << "=" << result;
	return 0;
}

int Task4(int Zn,int*arr) //* of two elements
{

	fillarr(arr, Zn);

	int result=0;
	int first, second;

	std::cout << "Enter first number = ";
	std::cin >> first;

	while (0 > first || first > (Zn - 1)) {

		std::cout << "Please enter valid first number = ";
		std::cin >> first;
	}
	std::cout << "Enter second number = ";
	std::cin >> second;
	while (0 > second || second > (Zn - 1)) {

		std::cout << "Please enter valid second number =";
		std::cin >> second;
	}
	result = (first * second) % Zn;

	std::cout << first <<"*"<<second <<"=" << result;
	return 0;

}

int Task5(int*arr,int Zn) //all reciprocal
{

	fillarr(arr, Zn);
    int rows = 2;
	int cols = Zn;

	std::cout << std::endl;
	int** ar = new int* [rows];
	for (int row = 0; row < rows; ++row)
	{
		ar[row] = new int[cols];
	}
	for (int i = 1; i < 2; i++)
	{
		for (int j = 0; j < Zn; j++)
		{
			for (int x = 0; x < Zn; x++)
			{
				int res;
				res = arr[j] * x;
				if (res % Zn == 1) {
					ar[1][j] = x;
					break;
				}
				else ar[1][j] = -1;
			}
		}
	}

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < Zn; j++)
		{
			std:: cout << "1/" << j << "  ";
		}
	}
	std::cout << std::endl;
	
	for (int j = 0; j < Zn; j++)
	{
		std::cout<< j << "=" << ar[1][j] << std::endl;

	}
	
	delete2darr(rows,ar);
	return 0;
}

int Task6(int* arr,int Zn) //reciprocal of one element
{

	fillarr(arr, Zn);

	
	int rows = 2;
	int cols = Zn;
	int** ar = new int* [rows];
	for (int row = 0; row < rows; ++row)
	{
		ar[row] = new int[cols];
	}
	for (int i = 1; i < 2; i++)
	{
		for (int j = 0; j < Zn; j++)
		{
			for (int x = 0; x < Zn; x++)
			{
				int res;
				res = arr[j] * x;
				if (res % Zn == 1) {
					ar[1][j] = x;
					break;
				}
				else ar[1][j] = -1;
			}
		}
	}
	/*for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < Zn; j++)
		{
			std::cout << "1/" << j << "  ";
		}
	}
	std::cout << std::endl;
	for (int i = 1; i < 2; i++)
	{
		for (int j = 0; j < Zn; j++)
		{
			std::cout << "  " << ar[i][j] << "  ";

		}
	}*/

	std:: cout << std::endl;
	int num;
	std::cout << "Please select number from the ring = ";
	std::cin >> num;
	std::cout << std::endl;

	while (0 > num || num > (Zn - 1)) {

		std::cout << "Please enter valid number = ";
		std::cin >> num;
	}

	int array[2][1];

	array[1][0] = ar[1][num];
	std::cout << "1/" << num << std::endl;
	std::cout << array[1][0];

	delete2darr(rows, ar);

	return 0;
}

int Task8(int *arr,int Zn) // devision of two numbers
{


	fillarr(arr, Zn);

	int second;
    int num;
	std::cout << std::endl;

    std::cout << "Please enter number from the ring = ";
	std::cin >> second;

	while (0 > second || second > (Zn - 1)) {

		std::cout << "Please enter valid first number = ";
		std::cin >> second;
	}

	std::cout << "Please select second number from the ring = ";
	std::cin >> num;
	std::cout << std::endl;

	while (0 > num || num > (Zn - 1)) {

		std::cout << "Please enter valid second number = ";
		std::cin >> num;
	}
	int rec;
	for (int j = 0; j < Zn; j++)
	{
		int res;
		res = num * j;
		if (res % Zn == 1) {
			rec = j;

			break;
		}
		else rec = -1;
	}
	
	if ((second * rec) % Zn > 0) {

		std::cout << second << "/" << num << " = " << (second * rec) % Zn << std::endl;
	}
	else
		std::cout << second << "/" << num << " = -1";

	return 0;
}

int Task9(int *arr,int Zn) //åxponentiation of a number
{

	fillarr(arr, Zn);

	int base, power;

	std::cout << std::endl;

	std::cout << "Please select number for base from the ring = ";
	std::cin >> base;
	std::cout << std::endl;

	while (0 > base || base > (Zn - 1)) {

		std::cout << "Please enter valid base = ";
		std::cin >> base;
	}

	std::cout << "Please enter number for power = ";
	std::cin >> power;
	std::cout << std::endl;

	std::cout << base << "^" << power << std::endl;


	/*int tova;
	for (int j = 2; j < Zn; j++)
	{
		tova =(int)(pow(base, j))%Zn;
		
		if (tova  == 1) {

			tova = j;
		}
		
	}
	int res =(int) (pow(base, power % tova))%Zn;
	

	std::cout << "Result  = " << res % Zn;*/


	int res, tova;

	int k = 2;
	tova = (base * base) % Zn;
	while (tova != 1) {

		if (k == power)break;
		tova = (tova * base) % Zn;
		k++;
	}
	tova = base;
	if (k == power) {
		for (int i = 0; i < power - 1; i++) {
			tova = (tova * base) % Zn;
		}
	}
	else {
		for (int i = 0; i < (power % k); i++)
		{
			tova = (tova * base) % Zn;
		}

	}
	res = tova;

	std::cout << base << "^" << power << " = " << res;

return 0;
	}

int Task11(int* arr, int Zn) //finding primitive roots
{

	fillarr(arr, Zn);

	std::cout << std::endl;
	int cols = Zn;
	int rows = Zn;
	int** ar = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		ar[i] = new int[cols];
	}
	int res,g;
	for (int i = 1; i < rows; i++)
	{
		std::cout << std::endl;

		for (int j = 1; j < cols; j++) {

			g = pow(i, j);
			res = g % Zn;
			if (res < 0) {

				res += Zn;
			}

			ar[i][j] = res;

			//std::cout << ar[i][j] << "\t";
		}
	}
	
	int z;
	std::cout << "Please enter number = ";
	std::cin >> z;

	bool hasEquals = true;

	for (int i = 1; i < rows; i++)
	{

		hasEquals = false;
		int temp = arr[i];
		for (int j = 1; j < cols; j++)
		{
			if (temp == ar[z][j])
			{
				hasEquals = true;
			}
		}
	}
	std::cout << std::endl;
	if (hasEquals == true) {
		std::cout << "Yes, it is primitive root ";
	}
	else {
		std::cout << "No, it is not primitive root";
	}

	delete2darr(rows,ar);

	return 0;
}
int Task12(int* arr, int Zn) //finding all primitive roots
{

	fillarr(arr, Zn);

	std::cout << std::endl;
	int cols = Zn;
	int rows = Zn;
	int** ar = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		ar[i] = new int[cols];
	}
	int res,g;
	for (int i = 1; i < rows; i++)
	{

	std::cout << std ::endl;
		
		for (int j = 1; j < cols; j++) {

			g = pow(i, j);
			res = g % Zn;

			if (res < 0) {

				res += Zn;
			}
			ar[i][j] = res;

			//std::cout << ar[i][j] << "\t";
		}
	}

	std::cout << std::endl;

	bool hasEquals;
	for (int i = 1; i < rows; i++)
	{
		hasEquals = false;
		for (int h = 1; h < cols; h++)
		{
			for (int j = h + 1; j < cols; j++) {

				if (ar[i][h] == ar[i][j]) {
					hasEquals = true;
					break;
				}
			}

			
		}
	
		if (hasEquals == false) {
			for (int x = 1; x < cols; x++)
			{
				std::cout << ar[i][x] << " ";
			}
			std::cout << std::endl;
		}
	}

if (hasEquals == true) {
				std::cout <<"There are no primitive roots" <<std::endl;
			}

	delete2darr(rows, ar);

	return 0;
}

int Task14() 
{

	int n;

	std::cout << "Please enter number = ";
	std::cin >> n;
	
	bool p = true;

	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			p = false;
			break;
		}
	}

	if (p==true) {
		std::cout << " Your number is residual field !";
	}
	else {
		std::cout << "Your number is not residual field !";
	}
	std::cout << std::endl;

	return 0;
}




