int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;
    
    for (int i = 10; i <= 10*n; i*= 10){
        sum += ((n % i) - (n % (i/10)))/(i/10);
        product *= ((n % i) - (n % (i/10)))/(i/10);
    }
    
    return product-sum;
}

