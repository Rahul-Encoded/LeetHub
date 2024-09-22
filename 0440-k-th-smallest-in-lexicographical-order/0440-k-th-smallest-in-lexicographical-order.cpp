class Solution {
public:

    // void lexicographicalOrder(int curr, int n, vector<int>& order){
    //     if(curr > n) return;

    //     order.push_back(curr);

    //     for(int i = 0; i <= 9; i++){
    //         int num = curr*10 + i;

    //         if(num > n) return;

    //         lexicographicalOrder(num, n, order);
    //     }
    // }
    //THIS GIVES MEMORY LIMIT EXCEEDED


    int Count(long curr, long next, int n) {
        int countNum = 0;

        while(curr <= n) {
            countNum += (next - curr);

            curr *= 10;
            next *= 10;

            next = min(next, long(n+1));
        }

        return countNum;
    }

    int findKthNumber(int n, int k) {
        // vector<int> order;

        // for(int i = 1; i <= 9; i++){
        //     lexicographicalOrder(i, n, order);
        // }

        // return order[k-1];


        int curr = 1;
        k--; 

        while(k > 0) {
            int count = Count(curr, curr+1, n);
            if(count  <= k) {
                curr++;
                k -= count; 
            } else {
                curr *= 10;
                k--;
            }
        }

        return curr;

    }
};


