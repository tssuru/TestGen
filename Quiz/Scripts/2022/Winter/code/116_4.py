try:
    def g(a,b):
        c=45
        if b!=4:
            c=5
        elif a==1:
             return 9
        else: 
            return 2
        return c
    
    print(g(9,-8))
    
except: print('error')
