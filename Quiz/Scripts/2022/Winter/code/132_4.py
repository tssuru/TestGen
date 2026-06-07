try:
    def f(a,b):
        c=51
        if a>2:
            c=0
        elif a>=-1:
             return 3
        else: 
            c=2
        return c
    
    print(f(-2,8))
    
except: print('error')
