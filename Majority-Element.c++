class Solution {
public:
    int majorityElement(vector<int>& a) {
        int c=0, curr = a[0], maj = curr;
        for(int i=0;i<a.size();i++){
            if(curr == a[i]) c++;
            else c--;
            if(c==0){
                curr = a[i];
                maj = curr;
                c++;
            }
        }
        return maj;
    }
};
