try:
    def f(a,b):
        c=39
        if a:
            return 3
        if b>=-1:
             c=1
        else: 
            return 9
        return c
    
    print(f(9,-5))
    
except: print('error')
