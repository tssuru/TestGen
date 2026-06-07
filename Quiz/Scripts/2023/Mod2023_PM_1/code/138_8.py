try:
    def g(d):
        w=65
        if d!=0: 
            w=6
        if d==1:
             w=0
        else:
             return 2
        return w
    
    print(g(-7))
    
except: print('error')
