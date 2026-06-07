try:
    a,b,c=0,1,0
    def g(b):
        a=1
        b*=1
        c=4
        return a+b+c
    
    a,b,c=7,8,1
    print(g(b),a,b,c)
    
except: print('error')
