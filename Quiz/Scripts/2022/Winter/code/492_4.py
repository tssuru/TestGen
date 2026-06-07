try:
    def g(a,b):
        c=25
        if b:
            c=2
        if b>=3:
             return 9
        else: 
            c=3
        return c
    
    print(g(4,4))
    
except: print('error')
