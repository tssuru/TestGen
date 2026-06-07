try:
    def g(b):
        v=88
        if b==1: 
            return 3
        if b<-4:
             v=1
        else:
             return 5
        return v
    
    print(g(-7))
    
except: print('error')
