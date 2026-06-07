try:
    a,b,c=4,3,8
    def h(a):
        a*=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,6,2
    print(h(b),a,b,c)
    
except: print('error')
