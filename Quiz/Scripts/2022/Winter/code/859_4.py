try:
    def g(a,b):
        c=64
        if b<=3:
            c=3
        if b!=2:
             return 7
        else: 
            c=1
        return c
    
    print(g(3,6))
    
except: print('error')
