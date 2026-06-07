try:
    def h(a,b):
        c=31
        if a:
            c=4
        elif b<-1:
             return 5
        else: 
            c=9
        return c
    
    print(h(9,-1))
    
except: print('error')
