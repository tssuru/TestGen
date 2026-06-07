try:
    a,b,c=2,1,8
    def g(b):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,3,4
    print(g(a),a,b,c)
    
except: print('error')
