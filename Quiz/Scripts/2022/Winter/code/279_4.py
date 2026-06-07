try:
    def f(a,b):
        c=10
        if a:
            c=8
        elif b<=-2:
             return 0
        else: 
            c=4
        return c
    
    print(f(-6,-8))
    
except: print('error')
