try:
    def g(a,b):
        c=27
        if a>2:
            return 9
        elif b!=0:
             c=8
        else: 
            return 3
        return c
    
    print(g(-4,-1))
    
except: print('error')
