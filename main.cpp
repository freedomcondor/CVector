#include <stdio.h>
#include "Vector3.h"
#include "Quaternion.h"

int main()
{
	Vector3 a(2,2,2);
	a.set(0,1,2);
	//Vector3 b(&a);
	Vector3 b(a);

	//b.set(0,1,2);
	printf("-------------- += test --------------\n");
	printf("a = %s\n",a.toStr());
	printf("b = %s\n",b.toStr());

	printf("a += b = %s\n",(a += b).toStr());
	printf("a -= b = %s\n",(a -= b).toStr());

	b.set(a);
	printf("a = %s\n",a.toStr());
	printf("b = %s\n",b.toStr());

	printf("-------------- = test --------------\n");
	Vector3 c;
	c = a;
	printf("a = %s\n",a.toStr());
	printf("c = %s\n",c.toStr());
	a.set(0,0,0);
	printf("a = %s\n",a.toStr());
	printf("c = %s\n",c.toStr());

	printf("-------------- + - test --------------\n");
	a.set(1,1,3);
	printf("a = %s\n",a.toStr());
	printf("-a = %s\n",(-a).toStr());
	printf("b = %s\n",b.toStr());
	printf("a+b = %s\n",(a+b).toStr());
	c = a + b;
	printf("c = a+b = %s\n",(c).toStr());

	printf("-------------- *= /= test --------------\n");
	printf("a = %s\n",a.toStr());
	printf("a*3 = %s\n",(a*=3).toStr());
	printf("a = %s\n",a.toStr());
	printf("a/2 = %s\n",(a/=2).toStr());
	printf("a = %s\n",a.toStr());
	printf("a/0 = %s\n",(a/=0).toStr());
	printf("a = %s\n",a.toStr());

	printf("-------------- * / test --------------\n");
	a.set(1,2,3);
	printf("a = %s\n",a.toStr());
	printf("a*3 = %s\n",(a*3).toStr());
	printf("3*a = %s\n",(3*a).toStr());
	c = a * 3;
	printf("c = %s\n",c.toStr());
	c = 3 * a;
	printf("c = %s\n",c.toStr());
	c = a / 3;
	printf("c = %s\n",c.toStr());
	printf("a*b = %s\n",(a*b).toStr());

	printf("-------------- ^ test --------------\n");
	printf("a = %s\n",a.toStr());
	double cc;
	cc = a ^ a;
	printf("a^a = %lf\n",a^a);
	printf("cc = %lf\n",cc);
	printf("a^2 = %lf\n",a^2);
	printf("a^3 = %lf\n",a^3);

	printf("-------------- == test --------------\n");
	printf("a = %s\n",a.toStr());
	printf("b = %s\n",b.toStr());
	printf("a == b %d\n",a == b);
	if (a == b) printf("true\n"); else printf("false\n");
	b = a;
	printf("b = %s\n",b.toStr());
	printf("a == b %d\n",a == b);
	if (a == b) printf("true\n"); else printf("false\n");

	printf("-------------- len/nor test --------------\n");
	printf("a = %s\n",a.toStr());
	printf("a.len = %lf\n",a.len());
	c = a.nor();
	printf("c = %s\n",c.toStr());
	printf("c = %lf\n",c.len());
	a.makenor();
	printf("a = %s\n",a.toStr());
	printf("a.len = %lf\n",a.len());

#ifdef Quaternion
	a.rotatetest();
#endif

	return 0;
}
