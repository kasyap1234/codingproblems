int print2largest(int arr[], int arr_size)
    {
    	//code here.
    	if(arr_size<=1){
    	    return -1; 
    	    
    	}
    	int second=-1; 
    	
    	int maximum=INT_MIN; 
    	for(int i=0;i<arr_size;i++){
    	    if(arr[i]>maximum){
    	        maximum=arr[i]; 
    	        
    	    }
    	    
    	    
    	    
    	    
    	}
    		for(int i=0;i<arr_size;i++){
    	    if(arr[i]>second && arr[i]!=maximum){
    	       second=arr[i]; 
    	       
    	        
    	    }
    		}
    	
    	 return second;
    }
