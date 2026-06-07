try:
    a,b,c=3,8,4
    def h(a):
        a-=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=7,1,5
    print(h(b),a,b,c)
    
except: print('error')
