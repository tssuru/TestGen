try:
    def f(a,b):
        c=49
        if a:
            c=0
        if a<=2:
             return 4
        else: 
            c=6
        return c
    
    print(f(-9,-6))
    
except: print('error')
