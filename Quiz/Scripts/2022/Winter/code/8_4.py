try:
    def g(a):
        u=54
        if a>0: 
            u=4
        elif a<=3:
             return 4
        else:
             u=0
        return u
    
    print(g(7))
    
except: print('error')
