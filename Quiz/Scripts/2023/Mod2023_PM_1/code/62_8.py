try:
    def f(a):
        w=68
        if a==1: 
            w=4
        if a<-2:
             w=9
        else:
             return 7
        return w
    
    print(f(-6))
    
except: print('error')
