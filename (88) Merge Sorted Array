class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> result(n+m); 

        int pos1 = 0;
        int pos2 = 0; 

        for (int i = 0; i < m+n; i++) {

            if (pos1 == m) {
                result[i] = nums2[pos2++];
            }

            else if (pos2 == n) {
                
                result[i] = nums1[pos1++];
                
            }
            else {
                result[i] = (nums1[pos1] < nums2[pos2] ? nums1[pos1++] : nums2[pos2++]);
            }
        }

        for (int i = 0; i < m+n; i++) {
            nums1[i] = result[i];
        }
    }
};
