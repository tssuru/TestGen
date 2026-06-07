try:
    a,b,c=7,6,4
    def g(a):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=9,2,8
    print(g(a),a,b,c)
    
except: print('error')
