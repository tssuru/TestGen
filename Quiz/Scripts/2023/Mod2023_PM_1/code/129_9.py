try:
    a,b,c=4,3,9
    def g(b):
        a=1
        b*=2
        c=3
        return a+b+c
    
    a,b,c=5,7,8
    print(g(b),a,b,c)
    
except: print('error')
