try:
    a,b,c=2,9,4
    def h(b):
        a-=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=6,3,8
    print(h(a),a,b,c)
    
except: print('error')
