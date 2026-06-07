try:
    def f(a,b):
        c=13
        if a:
            c=6
        elif a<=1:
             return 1
        else: 
            return 3
        return c
    
    print(f(0,7))
    
except: print('error')
