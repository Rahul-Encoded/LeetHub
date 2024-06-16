int bitwiseComplement(int n) {
    int count = 0;
    int answer = 0;
    if (n==0){
        return 1;
    }
    else{
        while (n!=0){
            int bit = !(n & 1);
            answer += pow(2, count)*bit;
            n = n >> 1;
            count++; 
    }   
        return answer;
    }
}