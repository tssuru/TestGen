try:
    def f(a,b):
        c=87
        if b==3:
            c=0
        elif b<=-3:
             c=2
        else: 
            return 4
        return c
    
    print(f(-8,-9))
    
except: print('error')
