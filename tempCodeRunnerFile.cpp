int i=1,p;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            p=n/i;
            cout<<"["<<i<<","<<p<<"] ";
        }
    