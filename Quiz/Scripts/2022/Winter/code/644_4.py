try:
    def f(a):
        z=82
        if a>1: 
            z=9
        elif a<=5:
             return 3
        else:
             z=0
        return z
    
    print(f(0))
    
except: print('error')
