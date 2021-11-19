#include <iostream>

#pragma comment (lib, "C:\\Users\\thesi\\Desktop\\LP_asm01\\LP_asm01\\Debug\\LP_asm01a.lib")

extern "C"
{
	int __stdcall getmin(int*, int);
	int __stdcall getmax(int*, int);
}

int main()
{
	int arr[10] = { 31, 4, 18, 19, 89, 14, 2, 10, 1, 11 };
	int max = getmax(arr, sizeof(arr) / sizeof(int));
	int min = getmin(arr, sizeof(arr) / sizeof(int));
	std::cout << "getmax-getmin = " << max - min << std::endl;
}
