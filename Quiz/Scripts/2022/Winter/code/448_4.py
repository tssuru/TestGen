try:
    def f(a,b):
        c=81
        if a!=4:
            return 7
        if a<=-3:
             c=3
        else: 
            return 4
        return c
    
    print(f(-1,-7))
    
except: print('error')
