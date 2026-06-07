try:
    a,b,c=7,1,8
    def g(a):
        a=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=5,6,3
    print(g(a),a,b,c)
    
except: print('error')
