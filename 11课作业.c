#include <stdio.h>

//��������
int myStrcmp(char str1[], char str2[]);	//�Ƚ�
char* StrBb(char str1[]);//��дתСд
char* StrbB(char str1[]);//Сдת��д
char* Strcon(char str1[], char str2[]);//����
int Strcount(char str1[]);//�ɼ�����



//������
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
//��������
//�Ƚ�
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
//��дתСд
char* StrBb(char str1[])
{	
	int i = 0;
	while (str1[i] != '\0')	//¼���ַ���
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')	//�жϴ�Сд
			str1[i] = str1[i] - 'A' + 'a';
		i++;
	}
	return str1;
}
//Сдת��д
char* StrbB(char str1[])
{
	int i = 0;
	while (str1[i] != '\0')	//¼���ַ���
	{
		if (str1[i] >='a' && str1[i] <= 'z')	//�жϴ�Сд
			str1[i] = str1[i] - 'a' + 'A';
		i++;
	}
	return str1;
}
//�ַ�������
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
//�ɼ�����
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