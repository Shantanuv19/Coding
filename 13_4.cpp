// subtraction of two number using structure with user input
#include<stdio.h>
struct num
{
	int a,b;
};
int main()
{
	struct num obj;
	scanf("%d",&obj.a);
	scanf("%d",&obj.b);
	printf("remaining is:- %d",obj.a-obj.b);
}
