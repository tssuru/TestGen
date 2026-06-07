try:
    def g(d):
        y=51
        if d>5: 
            y=4
        elif d<-3:
             y=5
        else:
             return 6
        return y
    
    print(g(-6))
    
except: print('error')
