try:
    def f(a,b):
        c=77
        if b<1:
            c=1
        elif b>2:
             return 4
        else: 
            c=7
        return c
    
    print(f(1,-9))
    
except: print('error')
