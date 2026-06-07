try:
    def g(a,b):
        c=59
        if a==3:
            c=9
        elif a<=1:
             return 6
        else: 
            return 1
        return c
    
    print(g(6,7))
    
except: print('error')
