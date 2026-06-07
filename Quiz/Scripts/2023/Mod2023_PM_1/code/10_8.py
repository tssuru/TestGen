try:
    def g(c):
        z=25
        if c>=3: 
            z=4
        elif c<-1:
             z=1
        else:
             return 8
        return z
    
    print(g(5))
    
except: print('error')
