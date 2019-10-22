#include<stdio.h>
 
int main()
{
    char operator;
    float input;
    float result=0;
     
    while(1)
    {
        printf("\n Enter operator and number [q0 exit] : ");
        scanf(" %c %f", &operator, &input );
         
        if(operator == 'q')
        {
            break;
        }
         
        switch(operator)
        {
            case '+':
                result += input;
                break;
            case '-':
                result -= input;
                break;
            case '*':
                result *= input;
                break;
            case '/':
                result /= input;
                break;
        }
        printf(" Result is %.2f\n", result);    
    }
     
    return 0;
}
