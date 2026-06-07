try:
    def g(a):
        z=56
        if a==3: 
            z=6
        elif a>=4:
             return 2
        else:
             z=1
        return z
    
    print(g(1))
    
except: print('error')
