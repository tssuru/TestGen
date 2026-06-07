try:
    def g(a):
        u=42
        if a<=-5: 
            return 6
        if a==1:
             u=2
        else:
             return 9
        return u
    
    print(g(9))
except: print('error')
