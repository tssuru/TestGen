try:
    a,b,c=3,9,8
    def h(a):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,2,6
    print(h(b),a,b,c)
    
except: print('error')
