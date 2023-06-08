class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int l=0,h,m;
        int c=0;
        int ans=0;
        for(auto a:grid){
            h=a.size()-1;
            l=0;
            ans=-1;
            while(l<=h){
                m=l+(h-l)/2;
                if(a[m]<0){
                    ans=m;
                    h=m-1;
                }else{
                    l=m+1;
                }
                
            }
            if(ans!=-1)
            c=c+a.size()-ans;
            
        }

        return c;
        
    }
};