//#include<stdio.h>
void con(int,int);
void con(int dec,int num)
{
int rem;
    rem=dec%num;
    if(dec==0)
    {return;}
    con(dec/num,num);
    if(rem<10)
        printf("%d",rem);
    else
    printf("%c",rem-10+'A');
}
