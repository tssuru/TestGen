try:
    def g(a):
        u=76
        if a==3: 
            u=5
        elif a!=5:
             u=1
        else:
             return 7
        return u
    
    print(g(6))
    
except: print('error')
