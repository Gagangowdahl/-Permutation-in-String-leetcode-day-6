class Solution {
public:
int n;
bool result;

void solve(int idx,string& s1, string& s2){
   if (idx == n) {
            if (s2.find(s1) != string::npos) {
                result = true;
            }
            return;
        }

        for (int i = idx; i < n; i++) {
            swap(s1[i], s1[idx]);
            
            solve(idx + 1, s1, s2);

            swap(s1[i], s1[idx]);

            if (result == true) 
                return;
        }
    }

    bool checkInclusion(string s1, string s2) {
        n = s1.length();
        result = false;  

        solve(0, s1, s2);

        return result;  
    }
};



