#include<stdio.h>

int main()
{
float rate_of_pay,regular_hours,overtime_hours,grosspay,netpay,tax;

printf("Enter the Hourly rate of pay : ");
scanf("%f",&rate_of_pay);
printf("Enter the number of Regular hours : ");
scanf("%f",&regular_hours);
printf("Enter the number of Overtime hours : ");
scanf("%f",&overtime_hours);
grosspay=(regular_hours*rate_of_pay)+(2*overtime_hours*rate_of_pay);
netpay=grosspay-(grosspay*0.15);
printf("Employee's Gross pay = %f\n",grosspay);
printf("Tax = %f\n",0.15*grosspay);
printf("Employee's Net pay = %f\n",netpay);
return 0;
}
