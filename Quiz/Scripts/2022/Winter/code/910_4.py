try:
    def f(a,b):
        c=63
        if b!=2:
            c=2
        elif b>4:
             return 5
        else: 
            c=0
        return c
    
    print(f(1,-4))
    
except: print('error')
