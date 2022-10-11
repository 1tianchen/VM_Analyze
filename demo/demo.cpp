
#include <iostream>
//优化关闭
char buf[1024];
int main()
{
	while (1)
	{
		scanf("%s", buf);
		if (!strcmp(buf, "123"))
		{
			printf("ok\n");
		}
		else
		{
			printf("fali\n");
		}
	}


}

