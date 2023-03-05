double subabs(double a, double b) // 差的绝对值
{
    double c; // 差
    c = a - b;
    if (c < 0)
    {
        c = 0 - c;
    }
    return c;
}