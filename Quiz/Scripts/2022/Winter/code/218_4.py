try:
    def g(a,b):
        c=63
        if b:
            c=2
        elif a>2:
             return 7
        else: 
            return 5
        return c
    
    print(g(-2,5))
    
except: print('error')
