try:
    a,b,c=6,4,7
    def h(a):
        a-=1
        b=4
        c=1
        return a+b+c
    
    a,b,c=3,1,8
    print(h(a),a,b,c)
    
except: print('error')
