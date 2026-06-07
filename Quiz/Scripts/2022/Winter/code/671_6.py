try:
    a,b,c=9,0,9
    def h(a):
        a-=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=3,5,8
    print(h(a),a,b,c)
    
except: print('error')
