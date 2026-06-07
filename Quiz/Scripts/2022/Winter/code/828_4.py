try:
    def g(a):
        z=25
        if a: 
            z=3
        if a!=5:
             z=3
        else:
             return 1
        return z
    
    print(g(-6))
    
except: print('error')
