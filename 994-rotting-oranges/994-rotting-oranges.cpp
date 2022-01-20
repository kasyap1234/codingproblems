class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0; 
        }
        int m=grid.size(); 
        int n=grid[0].size(); 
        int days=0; 
        int total =0; 
        int count=0; 
        queue<pair<int,int>>q; 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    total++; 
                }
                if(grid[i][j]==2){
                    q.push({i,j}); 
                    
                }
            }
        }
            int dx[4]={0,0,1,-1}; 
            int dy[4]={1,-1,0,0};
            while(!q.empty()){
                int k=q.size(); 
                count+=k; 
                
                while(k>0){
                    int x=q.front().first; 
                    int y=q.front().second; 
                    q.pop(); 
                    for(int i=0;i<4;i++){
                        int new_x=x+dx[i]; 
                        int new_y=y + dy[i]; 
                        if(new_x<0|| new_y<0 || new_x>=m || new_y>=n || grid[new_x][new_y]!=1)continue; 
                        grid[new_x][new_y]=2; 
                        q.push({new_x,new_y}); 
                    }
                    k--; 
                    
                }
                if(!q.empty()){
                    days++; 
                }
                
            }
            
            
                
            
        
    if(total==count){
                return days; 
            }
    return -1; 
    
    }
};