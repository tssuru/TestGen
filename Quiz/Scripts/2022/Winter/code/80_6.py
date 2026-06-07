try:
    a,b,c=2,1,3
    def g(b):
        global c
        a+=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,8,4
    print(g(b),a,b,c)
    
except: print('error')
