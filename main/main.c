#include <stdio.h>

void app_main(void)
{
    int a = 25;
    int *ptr = &a;
    printf ("Value: of a is %d\n", a); // Output the value of a = 25
    printf ("Address of a: %p\n", (void*)ptr); // Output the address of ptr)
}
