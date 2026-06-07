try:
    def g(a,b):
        c=19
        if b:
            return 1
        if a!=3:
             c=1
        else: 
            return 5
        return c
    
    print(g(4,2))
    
except: print('error')
