#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j = 1;
    int n = nums.size();
    int count = 1;
    int next = 1;

    while (j < n) {
        (nums[j] == nums[j - 1]) ? count += 1 : count = 1;

        if (count <= 2) {
            nums[next] = nums[j];
            next += 1;
        }
        j++;
    }
    return next;
}

int main()
{
    vector<int> nums = { 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5 };

    cout << removeDuplicates(nums);
}