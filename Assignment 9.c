#include<stdio.h>
int main() {
    int num,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    {
        int temp=num;
        while(temp!=0) {
            digit=temp%10;
            sum = sum+(digit*digit*digit);
            temp=temp/10;
        }
        {
            if (sum==num)
                printf("\n Amstrong");
            else
                printf("\n Not Amstrong");
        }
    }
}
