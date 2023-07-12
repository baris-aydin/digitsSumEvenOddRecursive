// If result is even return 1, if result is odd return 0
// Example: n = 178
// 1+7+8 = 16 returned value 1

int digitsSumEvenOddRecursive(int n)
{
    int res;
    if(n < 10)
    {
        if(n%2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    res = digitsSumEvenOddRecursive(n/10);
    if(n%10%2 == 0) //EVEN
    {
        if(res == 1) // result is even
        {
            return 1; // even plus even means even
        }
        else
        {
            return 0; // even plus odd is always odd
        }
    }
    else //ODD
    {
        if(res == 1) // even plus odd means odd
        {
            return 0;
        }
        else // odd plus odd means even
        {
            return 1;
        }
    }
}