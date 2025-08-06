#define SegDig1_ADDR   0x80001038

#define WRITE_7Seg(dir, value) { (*(volatile unsigned *)dir) = (value); }

#define N 8

int main ( void )
{
    WRITE_7Seg(SegDig1_ADDR, 0x48017108);

    while (1);

    return(0);
}
