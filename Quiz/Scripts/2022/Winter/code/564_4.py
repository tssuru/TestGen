try:
    def f(a,b):
        c=57
        if a:
            return 0
        elif a<=0:
             return 7
        else: 
            c=5
        return c
    
    print(f(3,-2))
    
except: print('error')
