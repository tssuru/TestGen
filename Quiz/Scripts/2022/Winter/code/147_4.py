try:
    def g(a,b):
        c=81
        if b>=3:
            return 6
        elif b<=0:
             c=4
        else: 
            return 0
        return c
    
    print(g(4,9))
    
except: print('error')
