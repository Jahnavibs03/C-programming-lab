/*(a)	To simulates a Simple Calculator to perform the basic Arithmetic Operations (Consider the operators +, -, x, / and % using ‘switch’ statement)
(b)	To check whether a given alphebet is Vowel or Consonant using ‘switch’ statement. */

#include<stdio.h>
#include<stdlib.h>
void main()
{
   int s,d,p,m,a,b,choice;
   float q;
    system("clear");
    printf("select choice\n1.addition\n2.subtraction\n3.multiplication\n4.modulus\n5.division\n");
    scanf("%d",&choice);
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
        case 1:
       s=a+b;
       printf("sum=%d\n",s);
       break;
        case 2:
        d=a-b;
       printf("difference=%d\n",d);
       break;
        case 3:
        p=a*b;
       printf("product=%d\n",p);
       break;
        case 4:
        m=a%b;
       printf("remainder=%d\n",m);
       break;
        case 5:
        if(b!=0)
        {q=a/b;
        printf("quotient=%f\n",q);
            break;
        }
        else
       {printf("invalid\n");
       break;}
        default:
        printf("wrong choice\n");
        break;
    }
}
(b) #include<stdio.h>
#include<stdlib.h>
void main()
{
    char c;
system(“clear”)
    printf("enter a character:\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'A':
        case 'e':
        case 'a':
        case 'i':
        case 'I':
        case 'o':
        case 'u':
        case 'U':
        case 'E':
        case 'O':
        printf("the letter is vowel\n");
        break;
        default:
        printf("letter is consonant\n");
        break;
    }
}
