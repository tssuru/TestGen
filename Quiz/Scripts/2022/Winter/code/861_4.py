try:
    def f(a,b):
        c=52
        if b==1:
            c=3
        elif a>-2:
             return 4
        else: 
            c=5
        return c
    
    print(f(0,-3))
    
except: print('error')
