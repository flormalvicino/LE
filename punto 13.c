
#include <stdio.h>

int main()
{  
    char texto []= "holisss";
    int letras = 0;
   
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] != ' ')
            letras++;
    }
    printf("[%s] tiene %d letras\n", texto, letras);
    return(0);
}

//

