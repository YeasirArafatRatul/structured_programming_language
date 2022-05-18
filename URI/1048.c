#include<stdio.h>

int main()
{
    float salary, money_earned, new_salary;

    scanf("%f",&salary);

    if(salary>0 && salary<=400.0)
    {
        new_salary = salary + (salary * 0.15);
        money_earned = salary * 0.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",new_salary,money_earned);
    }
    else if(salary<=800.0)
    {
        new_salary = salary+(salary*.12);
        money_earned = salary*.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",new_salary,money_earned);
    }
    else if(salary<=1200.0)
    {
        new_salary = salary+(salary*.10);
        money_earned = salary*.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",new_salary,money_earned);
    }
    else if(salary<=2000.0)
    {
        new_salary = salary+(salary*.07);
        money_earned = salary*.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",new_salary,money_earned);
    }
    else
    {
        new_salary = salary+(salary*.04);
        money_earned = salary*.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",new_salary,money_earned);
    }
    return 0;
}
