try:
    a,b,c=6,1,8
    def h(a):
        a=3
        b*=4
        c=1
        return a+b+c
    
    a,b,c=9,0,3
    print(h(b),a,b,c)
    
except: print('error')
