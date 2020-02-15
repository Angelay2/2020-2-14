#include <stdio.h>
#include <stdlib.h>

//
//void test(char** arr){
////void test(char* arr[5]){ 两种都可以
//
//}
//int main1(){
//	char* arr[5] = { "hello", "bit" };// 一个指针的数组
//	test(arr);// arr是个数组 传过去变为一个指针 本身为指针 => 传过去的二级指针
//
//	system("pause");
//	return 0;
//}
// a的类型int [5]
// 给a取地址的类型 int(*pa)[5] <= &a  pa是一个指针 指针类型是int [5]
// pa + 1 => 加上类型大小 sizeof(int [5])=> 4*5=20 => 加一个数组的长度 
// 
int main2(){
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);// 强转为(int*) 所以ptr-1 4个字节 一个数字 后一位为1
	printf("%d, %d", *(a + 1), *(ptr - 1));// 4, 1

	system("pause");
	return 0;
}

int main(){
	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));//  1, 6

	system("pause");
	return 0;
}




























