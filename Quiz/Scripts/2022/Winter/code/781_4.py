try:
    def f(a):
        z=43
        if a: 
            z=6
        if a>5:
             return 5
        else:
             z=0
        return z
    
    print(f(6))
    
except: print('error')
