try:
    def g(a,b):
        c=42
        if b<1:
            c=9
        if a>4:
             return 2
        else: 
            c=7
        return c
    
    print(g(-8,-9))
    
except: print('error')
