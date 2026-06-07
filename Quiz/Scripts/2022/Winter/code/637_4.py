try:
    def f(a,b):
        c=72
        if a:
            c=8
        elif b<=1:
             c=7
        else: 
            return 3
        return c
    
    print(f(-7,8))
    
except: print('error')
