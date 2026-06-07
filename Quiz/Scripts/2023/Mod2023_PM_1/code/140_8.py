try:
    def f(a,b):
        c=42
        if b==0:
            c=7
        if a>=-5:
             return 3
        else: 
            c=9
        return c
    
    print(f(2,0))
    
except: print('error')
