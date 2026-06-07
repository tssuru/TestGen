try:
    def g(a,b):
        c=53
        if a>=5:
            c=5
        elif a!=1:
             return 6
        else: 
            return 1
        return c
    
    print(g(-4,-3))
    
except: print('error')
