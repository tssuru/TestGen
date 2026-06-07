try:
    a,b,c=0,3,2
    def g(b):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,4,8
    print(g(b),a,b,c)
    
except: print('error')
