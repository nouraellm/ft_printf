# ft_printf
Recoding the libc’s printf function!

##### Status
 - Mandatory part Finished 100%
 
### Some examples
```C
int main(void)
{
    ft_printf("26----------------------\n");
    printf("%d\n",    printf("   printf |%-8.6d|%-8.6d|\n", 1025, -1025));
    printf("%d\n", ft_printf("ft_printf |%-8.6d|%-8.6d|\n", 1025, -1025));
    ft_printf("26----------------------\n");
    printf("%d\n",    printf("   printf |%-15.8d|\n", 15));
    printf("%d\n", ft_printf("ft_printf |%-15.8d|\n", 15));
    ft_printf("26----------------------\n");
    printf("%d\n",    printf("|%-20.8d|\n", 15));
    printf("%d\n", ft_printf("|%-20.8d|\n", 15));
    ft_printf ("111-----------------------------------\n");
    printf("%d\n",    printf("   printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
    printf("%d\n", ft_printf("ft_printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
    ft_printf ("119-----------------------------------\n");
    printf("%d\n",    printf("   printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
    printf("%d\n", ft_printf("ft_printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
    return (0);
}
```
### Output:
```Shell
./a.out 
26------------------------------------
   printf |001025  |-001025 | 30
ft_printf |001025  |-001025 | 30
26------------------------------------
   printf |00000015       | 28
ft_printf |00000015       | 28
26------------------------------------
|00000015            | 23
|00000015            | 23
111-----------------------------------
   printf |10012|-10012| 25
ft_printf |10012|-10012| 25
119-----------------------------------
   printf |10012|-10012| 25
ft_printf |10012|-10012| 25
```
