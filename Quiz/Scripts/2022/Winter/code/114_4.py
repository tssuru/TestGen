try:
    def g(a,b):
        c=60
        if a<=3:
            return 0
        elif a>-5:
             c=2
        else: 
            c=6
        return c
    
    print(g(-7,-5))
    
except: print('error')
