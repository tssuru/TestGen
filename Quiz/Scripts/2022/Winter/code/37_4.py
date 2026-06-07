try:
    def f(a,b):
        c=79
        if a:
            return 2
        if a>=-1:
             c=9
        else: 
            return 6
        return c
    
    print(f(4,-9))
    
except: print('error')
