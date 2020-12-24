#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,choice;
    while(1)
    {
        printf("1.addition\n");
        printf("2.substraction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :  printf("enter a number\n");
                      scanf("%d",&a);
                      printf("enter 2nd number\n");
                      scanf("%d",&b);
                      c = a + b;
                      printf("Addition is %d\n",c);
            break;

            case 2:  printf("enter a number\n");
                      scanf("%d",&a);
                      printf("enter 2nd number\n");
                      scanf("%d",&b);
                      c = a - b;
                      printf("substraction is %d\n",c);
            break;

            case 3:  printf("enter a number\n");
                      scanf("%d",&a);
                      printf("enter 2nd number\n");
                      scanf("%d",&b);
                      c = a * b;
                      printf("multiplication is %d\n",c);
            break;

            case 4:  printf("enter a number\n");
                      scanf("%d",&a);
                      printf("enter 2nd number\n");
                      scanf("%d",&b);
                      c = a / b;
                      printf("division is %d\n",c);
            break;
            case 5: exit(0);


        }

    }

}
