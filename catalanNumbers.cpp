int  findCatalan(int n) 
    {
        if(n<=1){
            return 1 ; 
            
        }
        int res=0; 
        for(int i=0;i<=n;i++){
            res+=findCatalan(i)*findCatalan(n-i-1); 
            
        }
        //code her
    return res; 
    
    }
