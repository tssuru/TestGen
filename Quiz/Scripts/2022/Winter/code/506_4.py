try:
    def g(a,b):
        c=37
        if b:
            return 6
        elif b>=0:
             return 3
        else: 
            c=0
        return c
    
    print(g(-9,-2))
    
except: print('error')
