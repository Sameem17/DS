#include <stdio.h>      //implementing stack using array
#include <stdlib.h>
#include <conio.h>

int stack[1000], n,top, val,i;
void push();
void pop();
void display();

int main()
{
    top=-1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    do{
        printf("Enter your choice: 1-Push, 2-Pop, 3-Display, 4-Exit: ");
        scanf("%d",&val);
        switch(val)
        {
        case 1:
            {
            push();
            break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("You chose to exit. See you again!\n");
                break;
            }
        default:
            {
                printf("Please enter correct choice again.\n");
            }
        }
    }while(val!=4);
}
void push()
{
    if (top>=n-1)
    {
                printf("Stack overflow!");
                getch();
    }
    else
    {
        printf("Enter the value to push!\n");
        top++;
        scanf("%d",&stack[top]);
    }
}

void pop()
{
    if(top<=-1)
        printf("Stack under-flow.");
    else
    {
        printf("The last element is successfully elemenated.\n");
        top--;
    }
}

void display()
{
    if (top<=-1)
        printf("No elements to display.\n");
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
