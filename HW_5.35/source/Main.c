#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>


unsigned long long int fibonacci(unsigned int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0;
    unsigned long long int prev1 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; ++i) 
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main(void) 
{
    unsigned int n;


    printf("叫块稱璸衡禣ん计兜计 (n): ");
    if (scanf("%u", &n) == 1) 
    {
        printf("Fibonacci(%u) = %llu\n\n", n, fibonacci(n));
    }


    unsigned long long int f0 = 0, f1 = 1, fn = 0;
    unsigned int max_n = 1;

    while (1) 
    {
        
        if (ULLONG_MAX - f1 < f0) 
        {
            break;
        }
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        max_n++;
    }

    printf("unsigned long long int や穿程禣ん计兜计: n = %u\n", max_n);
    printf("程禣ん计: %llu\n", fn);

    return 0;
}