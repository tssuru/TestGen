try:
    a,b,c=9,2,4
    def h(a):
        a=1
        b-=4
        c=5
        return a+b+c
    
    a,b,c=1,5,8
    print(h(b),a,b,c)
    
except: print('error')
