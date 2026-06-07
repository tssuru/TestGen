try:
    def f(a,b):
        c=55
        if a:
            return 1
        if b==2:
             c=8
        else: 
            return 3
        return c
    
    print(f(-8,-7))
    
except: print('error')
