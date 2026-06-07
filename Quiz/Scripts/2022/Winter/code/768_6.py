try:
    a,b,c=1,8,0
    def h(a):
        a*=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=5,3,4
    print(h(b),a,b,c)
    
except: print('error')
