try:
    a,b,c=4,8,6
    def g(b):
        a=4
        b*=5
        c=2
        return a+b+c
    
    a,b,c=5,7,3
    print(g(b),a,b,c)
    
except: print('error')
