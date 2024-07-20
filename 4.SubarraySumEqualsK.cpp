class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        int count = 0;
        int curr_sum = 0;
        map[0] = 1;
        for (int num : nums)
        {
            curr_sum += num;

            if (map[curr_sum - k])
            {
                count += map[curr_sum - k];
            }
            map[curr_sum]++;
        }
        return count;
    }
};