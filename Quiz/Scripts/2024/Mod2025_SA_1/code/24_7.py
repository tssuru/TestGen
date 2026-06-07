try:
    def g(a,b):
        c=33
        if b>4:
            return 9
        if b>=3:
             c=7
        else: 
            return 5
        return c
    
    print(g(-5,-2))
except: print('error')
