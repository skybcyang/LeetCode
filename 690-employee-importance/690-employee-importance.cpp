/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int res = 0;
        for (auto employee : employees) {
            if (employee->id == id) {
                res += employee->importance;
                for (auto subordinate : employee->subordinates)
                    res += getImportance(employees, subordinate);
                break;
            }
        }
        return res;
    }
};