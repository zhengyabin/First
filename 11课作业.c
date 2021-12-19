#include <stdio.h>

//函数声明
int myStrcmp(char str1[], char str2[]);	//比较
char* StrBb(char str1[]);//大写转小写
char* StrbB(char str1[]);//小写转大写
char* Strcon(char str1[], char str2[]);//连接
int Strcount(char str1[]);//可见长度



//主函数
int main()
{
	char str[] = "I Love You!";
	char str1[] = "China Forever";
	printf("%d\n", myStrcmp("0asd", "1sss"));
	printf("%s\n",Strcon(str, str1));
	printf("%s\n", StrBb(str1));
	printf("%s\n", StrbB(str));
	printf("%d\n", Strcount(str));
	return 0;
}
//函数定义
//比较
int myStrcmp(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return 1;
		else if(str1[i] == str2[i])
			return 0;
		else
			return -1;
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return 0;
	else if (str1[i] == '\0' && str2[i] != '\0')
		return -1;
	else
		return 1;
}
//大写转小写
char* StrBb(char str1[])
{	
	int i = 0;
	while (str1[i] != '\0')	//录入字符串
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')	//判断大小写
			str1[i] = str1[i] - 'A' + 'a';
		i++;
	}
	return str1;
}
//小写转大写
char* StrbB(char str1[])
{
	int i = 0;
	while (str1[i] != '\0')	//录入字符串
	{
		if (str1[i] >='a' && str1[i] <= 'z')	//判断大小写
			str1[i] = str1[i] - 'a' + 'A';
		i++;
	}
	return str1;
}
//字符串连接
char* Strcon(char str1[], char str2[])
{
	int i = 0;
	while(str1[i] != '\0')
	{
		i++;
	}
	int k = 0;
	while (str2[k] != '\0')
	{
		str1[i++] = str2[k++];
	}
	str1[i++] = '\0';
	return str1;
}
//可见长度
int Strcount(char str1[])
{
	int count = 0,i=0;
	while (str1[i] != '\0')
	{
		if (str1[i] != ' ')
			count++;
			i++;
	}
	return count;
}