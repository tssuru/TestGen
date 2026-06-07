try:
    def g(a,b):
        c=52
        if a:
            return 7
        elif b!=5:
             c=5
        else: 
            return 2
        return c
    
    print(g(2,-7))
    
except: print('error')
