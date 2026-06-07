try:
    a,b,c=4,6,7
    def h(a):
        a-=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=0,1,3
    print(h(a),a,b,c)
    
except: print('error')
