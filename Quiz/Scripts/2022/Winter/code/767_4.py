try:
    def g(a):
        z=13
        if a: 
            return 3
        elif a!=5:
             return 5
        else:
             z=2
        return z
    
    print(g(8))
    
except: print('error')
