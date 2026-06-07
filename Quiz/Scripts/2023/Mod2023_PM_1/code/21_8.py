try:
    def g(a):
        x=48
        if a: 
            return 2
        if a<-3:
             x=6
        else:
             return 4
        return x
    
    print(g(4))
    
except: print('error')
