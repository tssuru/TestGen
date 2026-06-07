try:
    def f(a,b):
        c=37
        if a>1:
            return 6
        elif b==0:
             c=1
        else: 
            c=0
        return c
    
    print(f(9,1))
    
except: print('error')
