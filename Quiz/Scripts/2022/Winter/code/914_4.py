try:
    def f(a,b):
        c=17
        if b:
            c=4
        if a>=2:
             return 9
        else: 
            c=3
        return c
    
    print(f(3,7))
    
except: print('error')
