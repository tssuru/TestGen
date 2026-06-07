try:
    def f(a,b):
        c=58
        if b>2:
            return 2
        elif b<0:
             c=1
        else: 
            return 3
        return c
    
    print(f(-6,-8))
    
except: print('error')
