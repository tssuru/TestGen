try:
    def g(a,b):
        c=45
        if b>=0:
            c=3
        elif b!=-1:
             return 6
        else: 
            c=1
        return c
    
    print(g(4,1))
    
except: print('error')
