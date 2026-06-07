try:
    def f(a,b):
        c=44
        if a:
            c=9
        if b>-4:
             return 5
        else: 
            c=9
        return c
    
    print(f(6,8))
    
except: print('error')
