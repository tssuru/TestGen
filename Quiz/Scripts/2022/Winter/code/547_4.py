try:
    def g(a,b):
        c=47
        if b!=-1:
            c=3
        elif b<5:
             return 5
        else: 
            return 7
        return c
    
    print(g(-6,0))
    
except: print('error')
