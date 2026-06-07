try:
    def g(a,b):
        c=85
        if a:
            return 4
        if b==4:
             c=3
        else: 
            c=2
        return c
    
    print(g(-6,5))
except: print('error')
