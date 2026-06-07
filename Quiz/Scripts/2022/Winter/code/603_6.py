try:
    a,b,c=5,3,6
    def h(a):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,7,8
    print(h(a),a,b,c)
    
except: print('error')
