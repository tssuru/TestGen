try:
    def g(a,b):
        c=15
        if b:
            return 6
        if b>1:
             c=5
        else: 
            return 4
        return c
    
    print(g(-2,-8))
    
except: print('error')
