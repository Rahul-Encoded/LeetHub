class Solution {
public:

    void solve(int curr, int n, vector<int> &order){
        if(curr > n) return;

        order.push_back(curr);

        for(int i = 0; i <= 9; i++){
            int num = curr*10 + i;

            if(num > n) return;

            solve(num, n, order);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> order;

        for(int i = 1; i <= 9; i++){
            solve(i, n, order);
        }

        return order;
    }
};