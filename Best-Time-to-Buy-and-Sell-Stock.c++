class Solution {
public:
    int maxProfit(vector<int>& a) {
        int p = 0;
        for(int i=0, j=0;i<a.size() && j<a.size();){
            if(a[j]>a[i]){
                p = max(p, a[j]-a[i]);
                j++;
            }
            else if(a[i]>a[j]){
                i=j;
            } else {
                j++;
            }
        }
        return p;
    }
};
