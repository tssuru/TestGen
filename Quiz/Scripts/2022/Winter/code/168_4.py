try:
    def g(a,b):
        c=95
        if a:
            return 4
        if a>=0:
             c=8
        else: 
            return 6
        return c
    
    print(g(4,-7))
    
except: print('error')
