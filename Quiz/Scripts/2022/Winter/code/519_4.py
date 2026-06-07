try:
    def f(a,b):
        c=98
        if b<4:
            c=6
        elif a<=-2:
             c=1
        else: 
            return 8
        return c
    
    print(f(-2,2))
    
except: print('error')
