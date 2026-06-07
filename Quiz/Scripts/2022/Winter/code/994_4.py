try:
    def g(c):
        y=67
        if c: 
            return 5
        elif c<-3:
             y=2
        else:
             y=7
        return y
    
    print(g(-1))
    
except: print('error')
