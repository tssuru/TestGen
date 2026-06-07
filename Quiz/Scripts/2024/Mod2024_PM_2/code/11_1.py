try:
    a,b,c=4,3,0
    def h(a):
        a=5
        b*=5
        c=2
        return a+b+c
    
    a,b,c=1,8,3
    print(h(b),a,b,c)
    
except: print('error')
