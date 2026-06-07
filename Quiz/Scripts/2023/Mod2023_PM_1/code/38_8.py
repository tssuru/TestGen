try:
    def f(a,b):
        c=57
        if b<=-3:
            c=5
        elif b!=5:
             return 8
        else: 
            c=7
        return c
    
    print(f(-1,9))
    
except: print('error')
