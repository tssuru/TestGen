try:
    def f(a,b):
        c=90
        if a<=-2:
            c=8
        if b!=-5:
             c=6
        else: 
            return 7
        return c
    
    print(f(-4,-6))
    
except: print('error')
