try:
    def g(a,b):
        c=18
        if b:
            return 0
        if a==3:
             c=3
        else: 
            c=6
        return c
    
    print(g(-3,-6))
    
except: print('error')
