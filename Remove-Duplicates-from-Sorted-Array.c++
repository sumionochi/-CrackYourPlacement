class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int c=1;
        for(int i=0, j=0;i<a.size() && j<a.size();){
            if(a[i]!=a[j]){
                i++;
                swap(a[i],a[j]);
                c++;
            }
            j++;
        }
        return c;
    }
};
