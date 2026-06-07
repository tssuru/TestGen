try:
    a,b,c=3,8,1
    def g(a):
        a=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=5,7,4
    print(g(a),a,b,c)
    
except: print('error')
