#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int b=1;
    int ret;
    ret=a++;//a��ֵ����ret���һ
    printf("ret=%d,a=%d\n",ret,a);
    ret=++b;//b+1�ٸ�ֵ��ret
    printf("ret=%d,b=%d\n",ret,b);
}
