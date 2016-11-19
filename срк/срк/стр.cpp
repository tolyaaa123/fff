#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char str[10],aa[10],ee[10],*p=new char[10];
	int s=0;
	scanf("%s %s %s",&str,&aa,ee);
	strcat(str,aa);
	cout<<str;
	p=strstr(str,ee);
while(strlen(p))
	{
	if (ee-str!=0)
	{
		p=strstr(p,ee);
		if (p==NULL)
		{
			break;
		}
		p++;
        s++;
	}
	else
	
		cout<<"net vhog";
	
}
cout<<s;
	system("pause");
}