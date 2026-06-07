try:
    def g(a,b):
        c=32
        if b>-2:
            c=5
        elif b<3:
             return 1
        else: 
            c=0
        return c
    
    print(g(5,-9))
    
except: print('error')
