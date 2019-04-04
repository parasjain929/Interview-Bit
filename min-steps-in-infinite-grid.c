int coverPoints(int* A, int n1, int* B, int n2) {
   int x,y;
    int i,tot1=0;
    for(i=1;i<n1;i++){
    x=abs(A[i]-A[i-1]);
    y=abs(B[i]-B[i-1]);

    if(x>y)
    {
    tot1=tot1+x;
    }
    else
    tot1=tot1+y;
    }
    return tot1;
}
