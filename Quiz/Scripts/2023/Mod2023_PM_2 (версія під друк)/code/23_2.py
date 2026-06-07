try:
    a,b,c=2,1,0
    def h(a):
        a=4
        b*=2
        c=4
        return a+b+c
    
    a,b,c=5,6,8
    print(h(b),a,b,c)
    
except: print('error')
