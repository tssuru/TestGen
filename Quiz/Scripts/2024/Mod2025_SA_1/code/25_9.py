try:
    a,b,c=3,4,3
    def h(b):
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=5,9,8
    print(h(a),a,b,c)
except: print('error')
