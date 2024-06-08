// cPP
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=nums.size()-1;
        int idx1=0,idx2=0;
        while(i<j)
        {
            if(v[i].first+v[j].first==target)
            {
                idx1=v[i].second;
                idx2=v[j].second;
                break;
            }
            else if(v[i].first+v[j].first>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {idx1,idx2};
    }
};

// Time Complexity:
//   -Sorting: The sorting step takes 𝑂(𝑛log⁡𝑛), where n is the number of elements in the nums vector.
//   -Two-Pointer Search: The while loop performs a linear scan, which takes O(n) time
//   Overall, the time complexity is O(nlogn).

// Space Complexity:
//   -Auxiliary Space: Storing the vector of pairs requires O(n) space, where n is the number of elements in the nums vector.
//   -Sorting Space: The sorting algorithm used (typically quicksort or mergesort) requires O(logn) auxiliary space.
//    Overall, the space complexity is O(n).

// JAVA

import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        List<int[]> v = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            v.add(new int[]{nums[i], i});
        }
        v.sort(Comparator.comparingInt(a -> a[0]));
        int i = 0;
        int j = nums.length - 1;
        int idx1 = 0, idx2 = 0;
        while (i < j) {
            if (v.get(i)[0] + v.get(j)[0] == target) {
                idx1 = v.get(i)[1];
                idx2 = v.get(j)[1];
                break;
            } else if (v.get(i)[0] + v.get(j)[0] > target) {
                j--;
            } else {
                i++;
            }
        }
        return new int[]{idx1, idx2};
    }
}
