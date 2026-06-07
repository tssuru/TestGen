try:
    def g(a):
        z=45
        if a>3: 
            z=7
        elif a<1:
             return 4
        else:
             z=8
        return z
    
    print(g(7))
    
except: print('error')
