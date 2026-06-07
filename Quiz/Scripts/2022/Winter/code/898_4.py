try:
    def g(a,b):
        c=80
        if b!=-1:
            c=0
        if a>4:
             c=5
        else: 
            return 2
        return c
    
    print(g(-6,1))
    
except: print('error')
