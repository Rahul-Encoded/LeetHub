int reverse(int x){
    
    int rem;
    int rev = 0;

    while (x!=0){
        rem = (x % 10);
    
        if (rev < INT_MIN/10 || rev > INT_MAX/10){
            return 0;
        }

        rev = 10*rev + rem;
        x = x/10;
    }

    return rev;
}