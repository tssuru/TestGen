try:
    def g(a):
        z=43
        if a==4: 
            z=5
        if a<=1:
             return 3
        else:
             z=9
        return z
    
    print(g(-4))
    
except: print('error')
