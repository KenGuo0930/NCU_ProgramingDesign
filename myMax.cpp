//implementation
int myMax(int a[], int len)
{
    int max = a[0];
    for(int i = 1; i < len; i++ )
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}