try:
    def f(a,b):
        c=57
        if a:
            c=4
        elif a>=3:
             return 0
        else: 
            c=8
        return c
    
    print(f(1,4))
except: print('error')
