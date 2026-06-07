try:
    a,b,c=4,3,8
    def h(a):
        a-=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=1,2,4
    print(h(b),a,b,c)
    
except: print('error')
