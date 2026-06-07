try:
    def g(a):
        v=96
        if a<4: 
            v=4
        elif a>=-5:
             v=6
        else:
             return 8
        return v
    
    print(g(-6))
    
except: print('error')
