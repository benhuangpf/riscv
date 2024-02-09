// #include "util.h"
int test(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return test(n - 1) + test(n - 2);
    }
    return 0;
}
int main()
{
    int n = 10;
    int ret = test(n);

    // return (ret == 55)? 0:-1;
    return 0;
}
