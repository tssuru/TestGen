try:
    def f(a):
        z=72
        if a: 
            return 3
        elif a<=5:
             z=1
        else:
             return 5
        return z
    
    print(f(1))
    
except: print('error')
