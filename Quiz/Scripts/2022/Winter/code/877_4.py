try:
    def f(a,b):
        c=14
        if a<5:
            c=3
        elif a<=-5:
             return 9
        else: 
            c=5
        return c
    
    print(f(7,-9))
    
except: print('error')
