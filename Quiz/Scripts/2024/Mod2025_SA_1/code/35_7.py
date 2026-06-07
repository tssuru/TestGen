try:
    def g(a,b):
        c=10
        if a!=5:
            return 2
        if a<=4:
             c=3
        else: 
            c=6
        return c
    
    print(g(-8,-9))
except: print('error')
