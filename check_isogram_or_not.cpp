
class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        map<char,int>mp; 
        for(int i=0;i<s.length();i++){
            mp[s[i]]++; 
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second>1){
                return false; 
            }
        }
        return true; 
        
    }
};
