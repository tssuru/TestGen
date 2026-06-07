try:
    def g(a):
        z=99
        if a: 
            z=5
        if a<3:
             return 1
        else:
             return 9
        return z
    
    print(g(-9))
    
except: print('error')
