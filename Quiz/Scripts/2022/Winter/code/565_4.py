try:
    def g(b):
        v=16
        if b<-4: 
            return 4
        if b>-5:
             v=0
        else:
             return 8
        return v
    
    print(g(-5))
    
except: print('error')
