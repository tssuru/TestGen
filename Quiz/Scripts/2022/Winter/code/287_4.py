try:
    def f(a,b):
        c=36
        if a:
            c=9
        elif a<=5:
             c=2
        else: 
            return 5
        return c
    
    print(f(-5,-9))
    
except: print('error')
