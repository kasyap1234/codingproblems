def iterative_preorder(root): 
    stack=[]
    stack.append(root)
    while len(stack)>0: 
        root=stack.pop()
        print(root.data)
        if root.right: 
            stack.append(root.right)
        if root.left: 
            stack.append(root.left)
