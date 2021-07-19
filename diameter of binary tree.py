 def height(self,root): 
        if root==None: 
            return 0
        else:
            return 1 + max(height(root.left) + height(root.right))
            
    #Function to return the diameter of a Binary Tree.
    def diameter(self,root):
        # Code here
        if root==None: 
            return 0
        lheight=height(root.left)
        rheight=height(root.right)
        ld=diameter(root.left)
        rd=diameter(root.right)
        
        
        dia=max(lheight+rheight+1,max(ld,rd))
        return dia 
        
