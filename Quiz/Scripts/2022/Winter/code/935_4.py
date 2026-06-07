try:
    def f(a,b):
        c=26
        if a:
            c=8
        if a==5:
             return 3
        else: 
            c=5
        return c
    
    print(f(-2,4))
    
except: print('error')
