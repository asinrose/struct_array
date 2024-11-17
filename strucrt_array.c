#include<stdio.h>
struct acct
{
	int ano;
	char uname[40];
	float abal;
};
int main() {
	int n,i;
	struct acct a[20];
	printf("enter the account numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("enter the account number:");
		scanf("%d",&a[i].ano);
		printf("enter the username:");
		scanf("%s",&a[i].uname);
		printf("enter the balance amount:");
		scanf("%f",&a[i].abal);
	}
	printf("acct no\tname\tbalance");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%f",a[i].ano,a[i].uname,a[i].abal);
	}
return 0;
}
