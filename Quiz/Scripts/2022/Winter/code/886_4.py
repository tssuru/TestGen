try:
    def f(a,b):
        c=59
        if a<=-2:
            c=0
        elif a>3:
             return 9
        else: 
            c=7
        return c
    
    print(f(0,-8))
    
except: print('error')
