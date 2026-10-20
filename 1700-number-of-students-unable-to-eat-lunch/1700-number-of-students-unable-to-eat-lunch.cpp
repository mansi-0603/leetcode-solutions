class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stdQ;
        int unRot = 0;

        for (int x : students) {
            stdQ.push(x);
        }

        int i =0;
        while(!stdQ.empty() && i < sandwiches.size() && unRot < stdQ.size()){
            if (sandwiches[i] == stdQ.front()) {
                stdQ.pop();
                i++;
                unRot = 0;
            } else {
                stdQ.push(stdQ.front());
                stdQ.pop();
                unRot ++;
            }
        }
        return stdQ.empty() ? 0 : stdQ.size();
    }
};