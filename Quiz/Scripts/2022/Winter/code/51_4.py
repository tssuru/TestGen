try:
    def f(a,b):
        c=42
        if a:
            c=1
        if b>=5:
             return 0
        else: 
            c=7
        return c
    
    print(f(-6,-9))
    
except: print('error')
