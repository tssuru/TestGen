try:
    def f(a,b):
        c=30
        if a:
            return 1
        elif a<=5:
             c=9
        else: 
            c=7
        return c
    
    print(f(-3,-9))
    
except: print('error')
