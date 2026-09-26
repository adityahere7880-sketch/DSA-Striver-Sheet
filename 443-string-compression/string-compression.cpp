class Solution {
public:
    int compress(vector<char>& chars) {
          int n = chars.size();
        int i = 0; // read pointer
        int j = 0; // write pointer

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            chars[j++] = curr;

            if (count > 1) {
                string s = to_string(count);
                for (char c : s) {
                    chars[j++] = c;
                }
            }
        }
        return j;
    }
};