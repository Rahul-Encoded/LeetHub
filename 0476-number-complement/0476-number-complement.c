int findComplement(int num) {
    int count = 0;
    int answer = 0;
    if (num == 0){
        return 1;
    }
    else{
        while (num!=0){
            int bit = !(num & 1);
            answer += pow(2, count)*bit;
            num = num >> 1;
            count++; 
    }   
        return answer;
    }
}