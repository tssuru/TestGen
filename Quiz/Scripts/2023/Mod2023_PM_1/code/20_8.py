try:
    def g(a,b):
        c=33
        if a:
            return 8
        elif a<=5:
             c=6
        else: 
            return 1
        return c
    
    print(g(3,-3))
    
except: print('error')
