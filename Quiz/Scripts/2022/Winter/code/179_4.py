try:
    def g(a,b):
        c=63
        if b==2:
            c=7
        if b>=4:
             return 0
        else: 
            c=8
        return c
    
    print(g(1,-3))
    
except: print('error')
