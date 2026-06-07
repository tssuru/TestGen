try:
    def f(a,b):
        c=13
        if b<=-1:
            return 3
        if a==5:
             c=5
        else: 
            c=2
        return c
    
    print(f(-9,1))
    
except: print('error')
