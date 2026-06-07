try:
    def f(a,b):
        c=62
        if b:
            c=5
        if a>=2:
             return 6
        else: 
            c=8
        return c
    
    print(f(-9,3))
    
except: print('error')
