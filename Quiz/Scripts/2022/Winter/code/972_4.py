try:
    def g(b):
        x=99
        if b: 
            return 8
        if b<-2:
             x=3
        else:
             return 9
        return x
    
    print(g(8))
    
except: print('error')
