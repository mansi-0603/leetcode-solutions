class Solution {
public:
    int convert(string date) {
        int months = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int tt = day;

        for (int i = 0; i < months - 1; i++) {
            tt += days[i];
        }
        return tt;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int a1 = convert(arriveAlice);
        int a2 = convert(leaveAlice);

        int b1 = convert(arriveBob);
        int b2 = convert(leaveBob);

        int cnt = 0;

        for (int d = 1; d <= 365; d++) {
            if (d >= a1 && d <= a2 && d >= b1 && d <= b2) {
                cnt++;
            }
        }
        return cnt;
    }
};