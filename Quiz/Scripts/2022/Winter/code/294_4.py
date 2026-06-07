try:
    def f(a):
        z=20
        if a>-2: 
            z=1
        elif a<=2:
             return 6
        else:
             z=0
        return z
    
    print(f(-1))
    
except: print('error')
