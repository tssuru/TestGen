try:
    a,b,c=9,4,2
    def h(a):
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=6,0,8
    print(h(b),a,b,c)
    
except: print('error')
