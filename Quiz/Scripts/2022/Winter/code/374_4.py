try:
    def f(a,b):
        c=34
        if b:
            return 1
        if a<1:
             c=7
        else: 
            return 7
        return c
    
    print(f(8,-3))
    
except: print('error')
