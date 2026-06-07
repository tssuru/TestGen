try:
    def g(a,b):
        c=34
        if b:
            c=7
        elif b!=-5:
             return 2
        else: 
            c=1
        return c
    
    print(g(-5,-6))
    
except: print('error')
