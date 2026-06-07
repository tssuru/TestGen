try:
    def f(a,b):
        c=46
        if a:
            c=0
        if b<=3:
             return 6
        else: 
            return 4
        return c
    
    print(f(-3,3))
    
except: print('error')
