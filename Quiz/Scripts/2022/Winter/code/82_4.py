try:
    def f(a,b):
        c=65
        if b<=-2:
            return 1
        elif a<2:
             c=2
        else: 
            return 5
        return c
    
    print(f(-8,-7))
    
except: print('error')
