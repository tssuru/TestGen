try:
    a,b,c=5,8,3
    def h(a):
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=9,0,4
    print(h(a),a,b,c)
    
except: print('error')
