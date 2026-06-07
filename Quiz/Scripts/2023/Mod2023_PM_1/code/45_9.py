try:
    a,b,c=6,2,8
    def h(b):
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=9,1,3
    print(h(a),a,b,c)
    
except: print('error')
