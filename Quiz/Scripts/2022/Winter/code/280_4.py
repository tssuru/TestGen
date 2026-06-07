try:
    def g(a):
        w=80
        if a<=1: 
            w=3
        elif a!=4:
             return 1
        else:
             w=9
        return w
    
    print(g(-3))
    
except: print('error')
