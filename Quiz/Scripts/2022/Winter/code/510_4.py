try:
    def g(a):
        v=83
        if a>1: 
            v=5
        if a>=0:
             return 9
        else:
             return 3
        return v
    
    print(g(8))
    
except: print('error')
