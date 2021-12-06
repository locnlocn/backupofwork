int C2I(unsigned char *p) // just use unsigned char X[5]="xxxx" . One time just 4 chars .
{
	unsigned char  * n;
    n = p ;
    n++ ; n++;n++;
	int e = 0;
	e = *n;
	e <<= 8;
	n--;
	e |= *n;
	e <<= 8;
	n--;
	e |= *n;
	e <<= 8;
	n--;
	e |= *n;
	return e;
}