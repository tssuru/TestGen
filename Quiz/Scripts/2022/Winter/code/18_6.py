try:
    a,b,c=7,4,8
    def h(a):
        a=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=5,3,1
    print(h(b),a,b,c)
    
except: print('error')
