try:
    def f(a,b):
        c=10
        if a:
            c=1
        if b>1:
             return 8
        else: 
            c=2
        return c
    
    print(f(2,8))
    
except: print('error')
