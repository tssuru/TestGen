try:
    def g(a):
        z=66
        if a: 
            return 3
        if a==5:
             z=4
        else:
             return 0
        return z
    
    print(g(-8))
    
except: print('error')
