try:
    a,b,c=9,7,8
    def g(b):
        a=4
        b=5
        c=5
        return a+b+c
    
    a,b,c=5,4,1
    print(g(a),a,b,c)
    
except: print('error')
