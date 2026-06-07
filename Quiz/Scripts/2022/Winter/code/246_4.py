try:
    def f(b):
        z=16
        if b<=4: 
            z=7
        elif b>=-5:
             return 3
        else:
             return 0
        return z
    
    print(f(5))
    
except: print('error')
