try:
    def f(a,b):
        c=47
        if b:
            c=7
        elif a>2:
             return 1
        else: 
            return 9
        return c
    
    print(f(5,-9))
    
except: print('error')
