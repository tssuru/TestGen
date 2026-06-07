try:
    def f(a,b):
        c=81
        if a>=1:
            c=0
        if b==5:
             c=1
        else: 
            return 0
        return c
    
    print(f(4,-9))
    
except: print('error')
