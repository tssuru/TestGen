try:
    def f(a,b):
        c=70
        if a:
            return 1
        elif a!=-5:
             c=2
        else: 
            c=0
        return c
    
    print(f(6,-7))
    
except: print('error')
