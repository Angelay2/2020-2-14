#include <stdio.h>
#include <stdlib.h>

//
//void test(char** arr){
////void test(char* arr[5]){ ���ֶ�����
//
//}
//int main1(){
//	char* arr[5] = { "hello", "bit" };// һ��ָ�������
//	test(arr);// arr�Ǹ����� ����ȥ��Ϊһ��ָ�� ����Ϊָ�� => ����ȥ�Ķ���ָ��
//
//	system("pause");
//	return 0;
//}
// a������int [5]
// ��aȡ��ַ������ int(*pa)[5] <= &a  pa��һ��ָ�� ָ��������int [5]
// pa + 1 => �������ʹ�С sizeof(int [5])=> 4*5=20 => ��һ������ĳ��� 
// 
int main2(){
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);// ǿתΪ(int*) ����ptr-1 4���ֽ� һ������ ��һλΪ1
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




























