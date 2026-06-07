try:
    def f(a,b):
        c=18
        if a:
            c=3
        elif a==1:
             return 6
        else: 
            c=5
        return c
    
    print(f(4,0))
    
except: print('error')
