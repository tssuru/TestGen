try:
    a,b,c=7,8,1
    def h(a):
        a=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=5,0,6
    print(h(b),a,b,c)
    
except: print('error')
