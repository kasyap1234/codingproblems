
class Solution {
public:
   int helpaterp(vector<vector<int>> hospital)
    {
        int n=hospital.size();
        int m=hospital[0].size();
        queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(hospital[i][j]==2){
                    pair<int,pair<int,int>> p;
                    p.first=0;
                    p.second.first=i;
                    p.second.second=j;
                    q.push(p);
                }
            }
        int t;
        while(q.size()>0){
            pair<int,pair<int,int>>p=q.front();
            t=p.first;
            int i=p.second.first;
            int j=p.second.second;
            q.pop();
            if(i<n-1&&hospital[i+1][j]==1){
                hospital[i+1][j]=2;
                q.push({t+1,{i+1,j}});
            }
            if(j>0&&hospital[i][j-1]==1){
                hospital[i][j-1]=2;
                q.push({t+1,{i,j-1}});
            }
            if(i>0&&hospital[i-1][j]==1){
                hospital[i-1][j]=2;
                q.push({t+1,{i-1,j}});
            }
            if(j<m-1&&hospital[i][j+1]==1){
                hospital[i][j+1]=2;
                q.push({t+1,{i,j+1}});
            }
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(hospital[i][j]==1)return -1;
        return t;
    }
};
