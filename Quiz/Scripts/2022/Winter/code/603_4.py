try:
    def g(a,b):
        c=64
        if b<5:
            return 6
        elif a<=-4:
             c=8
        else: 
            return 5
        return c
    
    print(g(-1,9))
    
except: print('error')
