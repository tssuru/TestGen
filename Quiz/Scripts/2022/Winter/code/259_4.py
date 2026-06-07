try:
    def f(a,b):
        c=33
        if b<=-4:
            c=0
        elif a<2:
             return 4
        else: 
            c=2
        return c
    
    print(f(-6,6))
    
except: print('error')
