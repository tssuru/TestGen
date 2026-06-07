try:
    def g(a,b):
        c=35
        if b<1:
            return 2
        elif b>0:
             c=9
        else: 
            c=0
        return c
    
    print(g(-5,6))
    
except: print('error')
