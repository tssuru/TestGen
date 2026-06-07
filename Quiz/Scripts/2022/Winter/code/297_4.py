try:
    def f(a,b):
        c=22
        if a>=3:
            c=2
        if a>-3:
             return 7
        else: 
            c=0
        return c
    
    print(f(4,8))
    
except: print('error')
