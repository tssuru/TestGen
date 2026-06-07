try:
    def g(a,b):
        c=14
        if a:
            return 1
        if b<=0:
             return 9
        else: 
            c=0
        return c
    
    print(g(9,-4))
    
except: print('error')
