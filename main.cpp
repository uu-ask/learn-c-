#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int b=1;
    int ret;
    ret=a++;//a的值赋给ret后加一
    printf("ret=%d,a=%d\n",ret,a);
    ret=++b;//b+1再赋值给ret
    printf("ret=%d,b=%d\n",ret,b);
}
