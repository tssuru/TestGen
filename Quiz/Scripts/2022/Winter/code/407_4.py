try:
    def f(a):
        z=65
        if a<=-2: 
            z=5
        elif a>2:
             return 0
        else:
             z=3
        return z
    
    print(f(1))
    
except: print('error')
