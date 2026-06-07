try:
    def f(a,b):
        c=88
        if a==5:
            c=8
        if b<=0:
             c=1
        else: 
            return 4
        return c
    
    print(f(-6,-9))
    
except: print('error')
