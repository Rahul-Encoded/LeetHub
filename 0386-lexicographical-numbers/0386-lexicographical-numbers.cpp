class Solution {
public:

    void lexicographicalOrder(int curr, int n, vector<int> &order){
        if(curr > n) return;

        order.push_back(curr);

        for(int i = 0; i <= 9; i++){
            int num = curr*10 + i;

            if(num > n) return;

            lexicographicalOrder(num, n, order);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> order;

        for(int i = 1; i <= 9; i++){
            lexicographicalOrder(i, n, order);
        }

        return order;
    }
};