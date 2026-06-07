try:
    def g(a,b):
        c=11
        if b!=5:
            c=8
        elif a<=2:
             return 0
        else: 
            return 7
        return c
    
    print(g(-8,-3))
    
except: print('error')
