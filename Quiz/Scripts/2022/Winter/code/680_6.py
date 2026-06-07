try:
    a,b,c=9,6,3
    def h(a):
        a+=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=5,2,1
    print(h(b),a,b,c)
    
except: print('error')
