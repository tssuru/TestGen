try:
    a,b,c=2,3,8
    def h(b):
        a=2
        b*=1
        c=5
        return a+b+c
    
    a,b,c=5,5,6
    print(h(b),a,b,c)
    
except: print('error')
