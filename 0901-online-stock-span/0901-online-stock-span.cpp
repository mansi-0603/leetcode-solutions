class StockSpanner {
public:
    stack<pair<int, int>> st;
    int index = 0;

    StockSpanner() {
    }

    int next(int price) {

        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }

        int ans;

        if (st.empty()) {
            ans = index + 1;
        } else {
            ans = index - st.top().second;
        }

        st.push({price, index});
        index++;

        return ans;
    }
};