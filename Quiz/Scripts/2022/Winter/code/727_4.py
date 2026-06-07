try:
    def f(d):
        u=34
        if d==5: 
            u=0
        if d>=0:
             return 6
        else:
             return 7
        return u
    
    print(f(-6))
    
except: print('error')
