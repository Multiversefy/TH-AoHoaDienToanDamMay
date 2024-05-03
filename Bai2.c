#include <stdio.h>
#include <math.h>

int KiemTraSCP(int i)
{
    int x = sqrt(i);
    if(x*x == i)
        return 1;
    return 0;
}

int DemSCP(int n)
{
    int temp = 0;
    for(int i = 1; i < n; i++)
    {
        if (KiemTraSCP(i) == 1)
        {
            printf("%d\t", i);
            temp+=1;
        }
    }
    
    return temp;
}

int main(void){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    printf("\nSo chinh phuong: ");
    int s = DemSCP(n);
    printf("\nTong so chinh phuong: %d", s);
}
