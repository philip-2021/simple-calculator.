/*
create a calculator program that will accept the two numbers and compute the sum, difference, product, quotient, and modulus of the 2 numbers
inputs:
    num1, num2
    outputs:
        sum
        diff
        quotient
        modulus
        computations:
            sun=num1+num2
            diff=num1-num2
            quot=num1/num2
            modu=num1% num2

*/

#include <stdio.h>
int main()
{
// variable declaration
int num1,num2,sum,diff,pro,mod;
float quot;

num1=200;
num2=56;
sum = num1 + num2;
diff = num1 - num2;
pro = num1 * num2;
quot = num1 / num2;
mod = num1 % num2;

// output
// sum :result
// 3v

printf("%d + %d = %d/n", num1, num2, sum);
printf("%d - %d =%d/n", num1, num2, diff);
printf("%d * %d =%d/n", num1, num2, pro);
printf("%d / %d =%f/n", num1, num2, quot);
printf("%d mod %d =%d/n", num1, num2, mod);

return 0;
}
