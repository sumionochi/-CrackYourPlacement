class Solution {
public:
    int maxProfit(vector<int>& a) {
        int sum=0;
        for(int i=1,j=0;i<a.size();i++){
            if(a[i]<a[j]){
                j=i;
            }
            if(a[i]>a[j]){
                if(i!=a.size()-1 && a[i+1]>a[i]) continue;
                else {
                    sum+=a[i]-a[j];
                    j=i+1;
                }
            }
        }
        return sum;
    }
};
