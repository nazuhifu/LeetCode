class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int j = 0, sum = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D") {
                record.push_back(record[j-1] * 2);
                sum += record[j];
                j++;
            } else if (operations[i] == "C") {
                sum -= record[j-1];
                record.pop_back();
                j--;
            } else if (operations[i] == "+") {
                record.push_back(record[j-1] + record[j-2]);
                sum += record[j];
                j++;
            } else {
                record.push_back(stoi(operations[i]));
                sum += record[j];
                j++;
            }
        }
        return sum;
    }
};
