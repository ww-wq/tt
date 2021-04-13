//#include <stdio.h>
//#include <math.h>
//void main()
//{   int m, m1, n=1, i;
//    scanf("%d", &m);
//	m1 = m;
//	while(m1/10!=0)
//	{	n++;   
//		m1=m1/10;  
//	}
////	printf("n=%d\n", n);
//	m1=m;
//	for(i=n-1; i>=0; i--)
//	{	int t = (int)pow(10,i);
//		switch(m1/t)
//		{	case 1: printf("one "); break;
//			case 2: printf("two "); break;
//			case 3: printf("three "); break;
//			case 4: printf("four "); break;
//			case 5: printf("five "); break;
//			case 6: printf("six "); break;
//			case 7: printf("seven "); break;
//			case 8: printf("eight "); break;
//			case 9: printf("nine "); break;
//			case 0: printf("zero "); 
//		}
//		m1=m1%t;
//	}
//	printf("\n");
//}
#include <stdio.h>
void main()
{   char c;   
    int i=0;	
	while( ( c=getchar() )!='#')
	{	i++;
		if( i!=1 )  printf(",");
		switch(c)
		{	case '1': printf("one"); break;
			case '2': printf("two"); break;
			case '3': printf("three"); break;
			case '4': printf("four"); break;
			case '5': printf("five"); break;
			case '6': printf("six"); break;
			case '7': printf("seven"); break;
			case '8': printf("eight"); break;
			case '9': printf("nine"); break;
			case '0': printf("zero");   
		}		
	}
	printf("\n");
}
