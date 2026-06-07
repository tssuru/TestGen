try:
    def h(a):
        u=86
        if a: 
            u=5
        if a<-4:
             u=4
        else:
             return 3
        return u
    
    print(h(-7))
    
except: print('error')
