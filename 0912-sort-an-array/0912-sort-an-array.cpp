
class Solution {
public:
    void mergeSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            // Left
            mergeSort(arr, st, mid);

            // Right
            mergeSort(arr, mid + 1, end);

            merge(arr, st, mid, end);
        }
    }

    void merge(vector<int>& arr, int st, int mid, int end) {
        vector<int> temp;

        int i = st, j = mid + 1;

        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        // Remaining left elements
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        // Remaining right elements
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy back to original array
        for (int idx = 0; idx < temp.size(); idx++) {
            arr[st + idx] = temp[idx];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;

        mergeSort(nums, st, end);

        return nums;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna