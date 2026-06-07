try:
    def f(a,b):
        c=78
        if a:
            c=6
        if a==1:
             c=7
        else: 
            return 4
        return c
    
    print(f(-8,4))
    
except: print('error')
