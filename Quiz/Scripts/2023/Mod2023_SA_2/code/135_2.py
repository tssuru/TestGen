try:
    a,b,c=3,9,6
    def g(a):
        global c
        a+=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=1,5,8
    print(g(b),a,b,c)
    
except: print('error')
