#include<stdio.h>

/**
*main-Entrypoint
*
*Return:Always0(Success)
*/
intmain(void)
{
printf("Sizeofachar:%dbyte(s)\n",sizeof(char));
printf("Sizeofanint:%dbyte(s)\n",sizeof(int));
printf("Sizeofalongint:%dbyte(s)\n",sizeof(longint));
printf("Sizeofalonglongint:%dbyte(s)\n",sizeof(longlongint));
printf("Sizeofafloat:%dbyte(s)\n",sizeof(float));
return(0);
}
