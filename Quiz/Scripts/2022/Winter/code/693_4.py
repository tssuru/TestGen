try:
    def g(a,b):
        c=31
        if b:
            return 9
        elif b>=-5:
             c=6
        else: 
            return 2
        return c
    
    print(g(2,6))
    
except: print('error')
