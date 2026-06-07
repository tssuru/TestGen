try:
    def g(a,b):
        c=14
        if b:
            c=4
        if b>=0:
             c=2
        else: 
            return 0
        return c
    
    print(g(-7,4))
    
except: print('error')
