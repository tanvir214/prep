int calcGCD(int n, int m){
    // Write your code here.
    int x,l;
    (n>m)?x=m:x=n;

    for(int i=1;i<=x;i++){
        if(n%i==0 && m%i==0){
            if(i>l)
                l=i;
        }
    }

    return l;
}